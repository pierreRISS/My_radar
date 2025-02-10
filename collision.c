/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** collision.c
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
#include "quad_tree/include/myquadtree.h"
#include "quad_tree/include/my.h"

int collision_other(linked_list_t *current_collider_l,
    struct data_collision *coll_data)
{
    object_t *other_collider;
    object_t *current_collider = ((object_t *)current_collider_l->data);

    for (linked_list_t *link = current_collider_l->next;
    link != NULL; link = link->next){
        other_collider = ((object_t *)link->data);
        if (other_collider->type == 'A'
        && other_collider->disp == 1
        && other_collider->checked_colision == 0
        && collision_detection(current_collider->rect,
        other_collider->rect, coll_data->col_buff) == 1){
            current_collider->dead = 1;
            other_collider->dead = 1;
        }
    }
}

int collision_planes(void *rect_quadri_v, void *coll_data_v)
{
    struct rect_quadri *rect_quadri = rect_quadri_v;
    struct data_collision *coll_data = coll_data_v;

    for (linked_list_t *link1 = rect_quadri->begin;
    link1 != NULL; link1 = link1->next){
        collision_other(link1, coll_data);
    }
}

int unit_collision(void *rect_quadri_v, void *coll_data_v)
{
    struct rect_quadri *rect_quadri = rect_quadri_v;
    struct data_collision *coll_data = coll_data_v;
    object_t *ctrl_twrs = coll_data->object;

    for (linked_list_t *link1 = rect_quadri->begin; link1 != NULL;
        link1 = link1->next) {
        if (is_coll_circle_rect(((object_t *)link1->data)->rect,
        ctrl_twrs->orignial_pos, ctrl_twrs->radius, coll_data->col_buff) == 1){
            ((object_t *)link1->data)->checked_colision = 1;
        }
    }
}

int collision_ctrl_tower(linked_list_t *ctrl_twrs,
    quad_tree_t *tree, struct data_collision *data_coll)
{
    if (is_empty(ctrl_twrs))
        return 0;
    for (linked_list_t *link1 = ctrl_twrs; link1 != NULL; link1 = link1->next){
        data_coll->object = link1->data;
        quadtree_apply_infix(tree, &unit_collision, data_coll);
    }
}
