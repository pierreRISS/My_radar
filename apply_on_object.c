/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** apply_on_object.c
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

static int display_plane(object_t *object, sfRenderWindow *win)
{
    sfRenderWindow_drawRectangleShape(win, object->rect, NULL);
}

static int display_ctrl_tower(object_t *object, sfRenderWindow *win)
{
    sfRenderWindow_drawCircleShape(win, object->circ, NULL);
    sfRenderWindow_drawSprite(win, object->sprite, NULL);
}

static int movement(object_t *object, sfRenderWindow *win, float delta_time)
{
    if (object->wait == 0){
        object->orignial_pos = add_vector(object->orignial_pos,
        multiply_vector(object->speed_vec, delta_time));
    }
    if (compare_vec(object->orignial_pos, object->arrival_pos, 3) == 1){
        object->disp = 0;
        object->dead = 1;
    }
}

static int delay_planes(object_t *object, float actual_time)
{
    if (((int)(actual_time / 1000000)) == object->delay){
        object->disp = 1;
        object->wait = 0;
    }
}

static int apply_on_sprite(object_t *object)
{
    sfRectangleShape_setPosition(object->rect, object->orignial_pos);
}

void apply_on_object(object_t *object, struct setting *param)
{
    if (object->type == 'A'){
        if (object->disp == 0){
            delay_planes(object, param->time_set->secondes_start);
        } else {
            movement(object, param->windows, param->time_set->delta_time);
            apply_on_sprite(object);
            display_plane(object, param->windows);
        }
    }
}

void disp_ctrltwr(object_t *object, struct setting *param)
{
    if (object->type == 'T'){
        display_ctrl_tower(object, param->windows);
    }
}
