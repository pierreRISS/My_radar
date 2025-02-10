/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** inst_param.c
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

struct time_setting *instantiate_time_setting(void)
{
    struct time_setting *time_set = emalloc(sizeof(struct time_setting));

    time_set->clock = sfClock_create();
    time_set->nbr_fps = 0;
    time_set->secondes_start = 0;
    return time_set;
}

struct event_key *inst_evt_key(void)
{
    struct event_key *evt_key = emalloc(sizeof(struct event_key));

    evt_key->l = 1;
    evt_key->s = 1;
    return evt_key;
}

struct data_collision *inst_data_coll(void)
{
    struct data_collision *data_coll = emalloc(sizeof(struct data_collision));

    data_coll->col_buff = emalloc(sizeof(struct collision_buffer));
    data_coll->col_buff->vect = emalloc(sizeof(sfVector2f) * 8);
    data_coll->col_buff->transfo = emalloc(sizeof(sfTransform));
    data_coll->col_buff->min_max = emalloc(sizeof(struct min_max));
    return data_coll;
};

struct setting *instantice_param(void)
{
    struct setting *param = emalloc(sizeof(struct setting));

    param->windows = create_windows();
    param->background = create_sprite("resources/carte-du-monde.jpg",
    inst_vect(0, 0), inst_vect(0.60, 0.60), inst_vect(0, 0));
    param->time_set = instantiate_time_setting();
    param->evt_key = inst_evt_key();
    param->data_coll = inst_data_coll();
    param->tree = inst_quad_tree();
    param->timer = create_text(24, inst_vect(MAX_X - 140, 20),
    "resources/Archivo_Condensed-Bold.ttf");
    return param;
}
