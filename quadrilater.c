/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** quadrilater.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <math.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include "lib/my/libmy.h"
#include "math/math.h"
#include "include/param.h"
#include "quad_tree/include/my.h"

struct mult_lists *inst_mult_list(void)
{
    struct mult_lists *listes = emalloc(sizeof(struct mult_lists));

    listes->bottom_right = instantiate_linked_list();
    listes->bottom_left = instantiate_linked_list();
    listes->right_top = instantiate_linked_list();
    listes->left_top = instantiate_linked_list();
    return listes;
}

int *free_mult_list(struct mult_lists *listes,
    sfVector2f size, linked_list_t *begin)
{
    if (size.x != MAX_X){
        free(listes);
        free_list(begin, &nothing);
    }
}

struct mult_lists *disperse_object(sfVector2f size, sfVector2f pos,
    linked_list_t *begin, sfVector2f lim)
{
    sfVector2f curr_pos;
    sfVector2f lim_size = add_vector(size, pos);
    struct mult_lists *listes = inst_mult_list();

    for (linked_list_t *link = begin; link != NULL; link = link->next){
        curr_pos = ((object_t *)link->data)->orignial_pos;
        if (curr_pos.x > lim.x - 1 && curr_pos.y > lim.y - 1)
            add_node(listes->bottom_right, link->data);
        if (curr_pos.x < lim.x + 1 && curr_pos.y > lim.y - 1)
            add_node(listes->bottom_left, link->data);
        if (curr_pos.x > lim.x - 1 && curr_pos.y < lim.y + 1)
            add_node(listes->right_top, link->data);
        if (curr_pos.x < lim.x + 1 && curr_pos.y < lim.y + 1)
            add_node(listes->left_top, link->data);
    }
    return listes;
}

struct rect_quadri *inst_rect_quad(linked_list_t *begin,
    sfVector2f lim, sfVector2f size)
{
    struct rect_quadri *rect = emalloc(sizeof(struct rect_quadri));

    rect->begin = begin;
    rect->cordonate = lim;
    rect->size = size;
    return rect;
}

quad_tree_t *quadrilater(sfVector2f size, sfVector2f pos, linked_list_t *begin)
{
    quad_tree_t *tree = inst_quad_tree();
    struct mult_lists *listes;
    sfVector2f lim = inst_vect((size.x / 2) + pos.x, (size.y / 2) + pos.y);

    if (my_list_size(begin) < MAX_ENTITIS_QUAD || size.x < 50){
        if (is_empty(begin) == 0)
            tree->data = inst_rect_quad(begin, lim, size);
        return tree;
    }
    listes = disperse_object(size, pos, begin, lim);
    tree->next1 = quadrilater(multiply_vector(size, 0.5),
    add_vector(pos, multiply_vector(size, 0.5)), listes->bottom_right);
    tree->next2 = quadrilater(multiply_vector(size, 0.5),
    add_vector(pos, inst_vect(0, size.y / 2)), listes->bottom_left);
    tree->next3 = quadrilater(multiply_vector(size, 0.5),
    add_vector(pos, inst_vect(size.y / 2, 0)), listes->right_top);
    tree->next4 = quadrilater(multiply_vector(size, 0.5),
    pos, listes->left_top);
    free_mult_list(listes, size, begin);
    return tree;
}
