/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** main.c
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

void apply_on_objectl(linked_list_t *object_l, struct setting *param)
{
    for (linked_list_t *link = object_l;
    link != NULL; link = link->next){
        apply_on_object(link->data, param);
    }
    for (linked_list_t *link = object_l;
    link != NULL; link = link->next){
        ((object_t *)(link->data))->checked_colision = 0;
    }
}

int apply_on_ctrl_twr(linked_list_t *ctrl_twr, struct setting *param)
{
    if (is_empty(ctrl_twr))
        return 1;
    for (linked_list_t *link = ctrl_twr;
    link != NULL; link = link->next){
        disp_ctrltwr(link->data, param);
    }
}

int game_on(struct setting *param)
{
    sfRenderWindow_clear(param->windows, sfBlack);
    event(param->windows, param->evt_key, param->objects_l, param->ctrl_twr);
    sfRenderWindow_drawSprite(param->windows, param->background, NULL);
    quadtree_free(param->tree, &free_quad_tree_data);
    param->tree = quadrilater(inst_vect(MAX_X, MAX_Y),
    inst_vect(0, 0), param->objects_l);
    collision_ctrl_tower(param->ctrl_twr, param->tree, param->data_coll);
    quadtree_apply_infix(param->tree, &collision_planes, param->data_coll);
    my_delete_nodes(param->objects_l, NULL, &delete_node);
    if (is_empty(param->objects_l)){
        sfRenderWindow_close(param->windows);
        return 0;
    }
    apply_on_objectl(param->objects_l, param);
    apply_on_ctrl_twr(param->ctrl_twr, param);
    timer(param->windows, param->timer,
    (param->time_set->secondes_start / 1000000));
    sfRenderWindow_display(param->windows);
}

void game(linked_list_t **instanced_l)
{
    struct setting *param = instantice_param();

    param->objects_l = instanced_l[0];
    param->ctrl_twr = instanced_l[1];
    if (is_empty(instanced_l[0]))
        sfRenderWindow_close(param->windows);
    while (sfRenderWindow_isOpen(param->windows)){
        time_calculator(param->time_set);
        game_on(param);
    }
}

int main(int argc, char **argv)
{
    char *no_arg = "/my_radar: bad arguments:"
    " 0 given but 84 is required\nretry with -h\n";
    linked_list_t **instanced_l;

    if (argc == 1) {
        return my_puterror(no_arg);
    }
    if (my_strcmp(argv[1], "-h") != 0){
        instanced_l = parce_infos_file(argv[1]);
        if (instanced_l == NULL)
            return 84;
        game(instanced_l);
    }
    if (my_strcmp(argv[1], "-h") == 0){
        my_putstr(read_file("./h_content.txt"));
    }
    return 0;
}
