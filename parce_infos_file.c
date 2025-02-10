/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** parce_infos_file.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <stdlib.h>
#include "list_chainee/include/my.h"
#include "include/struct.h"
#include "lib/my/libmy.h"
#include "include/my.h"
#include "math/math.h"


void init_bool(object_t *object)
{
    object->wait = 1;
    object->dead = 0;
    object->disp = 0;
    object->checked_colision = 0;
}

object_t *inst_plane(char **line)
{
    object_t *object = emalloc(sizeof(object_t));
    sfVector2f base = {1, 0};

    object->type = (*line[0]);
    object->orignial_pos.x = str_to_int(line[1]);
    object->orignial_pos.y = str_to_int(line[2]);
    object->arrival_pos.x = str_to_int(line[3]);
    object->arrival_pos.y = str_to_int(line[4]);
    object->speed = str_to_int(line[5]);
    object->speed_vec.x = (object->arrival_pos.x - object->orignial_pos.x);
    object->speed_vec.y = (object->arrival_pos.y - object->orignial_pos.y);
    object->rect = create_hitbox("resources/plane.png",
    object->orignial_pos, inst_vect(20, 20), inst_vect(0, 0));
    sfRectangleShape_setRotation(object->rect,
    (degres(angle_two_vector(object->speed_vec, object->orignial_pos))));
    object->speed_vec = multiply_vector(object->speed_vec,
    (1 / (norme(object->speed_vec) / object->speed)));
    object->delay = str_to_int(line[6]);
    init_bool(object);
    return object;
}

object_t *inst_ctrl_tower(char **line)
{
    object_t *object = emalloc(sizeof(object_t));
    sfVector2f base = {1, 0};

    object->type = (*line[0]);
    object->orignial_pos.x = str_to_int(line[1]);
    object->orignial_pos.y = str_to_int(line[2]);
    object->radius = str_to_int(line[3]);
    object->circ = create_circle_hitbox("resources/tower.png",
    object->orignial_pos, object->radius);
    object->sprite = create_sprite("resources/tower.png",
    object->orignial_pos,
    inst_vect(0.1, 0.1),
    inst_vect(25, 30));
    return object;
}

linked_list_t **parce_infos_file(char *path)
{
    char ***infos = get_matrice(path, " ");
    linked_list_t **parced_elements = emalloc(sizeof(linked_list_t *) * 2);

    parced_elements[0] = instantiate_linked_list();
    parced_elements[1] = instantiate_linked_list();
    if (infos == NULL){
        my_puterror("path is incorect\n");
        return NULL;
    }
    if (err_hdlg_parced_infos(infos) == 1)
        return NULL;
    for (int i = 0; infos[i] != NULL; i++){
        if ((*infos[i][0]) == 'A')
            add_node(parced_elements[0], inst_plane(infos[i]));
        if ((*infos[i][0]) == 'T')
            add_node(parced_elements[1], inst_ctrl_tower(infos[i]));
    }
    return parced_elements;
}
