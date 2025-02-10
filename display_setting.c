/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** display_setting.c
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

int turn_off_hitbox_plane(void *plane_v)
{
    if (((object_t *)plane_v)->type == 'A')
        sfRectangleShape_setOutlineThickness(((object_t *)plane_v)->rect, 0);
    else
        sfCircleShape_setOutlineThickness(((object_t *)plane_v)->circ, 0);
}

int turn_on_hitbox_plane(void *plane_v)
{
    if (((object_t *)plane_v)->type == 'A')
        sfRectangleShape_setOutlineThickness(((object_t *)plane_v)->rect, 2.5);
    else
        sfCircleShape_setOutlineThickness(((object_t *)plane_v)->circ, 5);
}

int turn_off_sprite(void *plane_v)
{
    if (((object_t *)plane_v)->type == 'A')
        sfRectangleShape_setFillColor(((object_t *)plane_v)->rect,
        sfTransparent);
    else
        sfSprite_setColor(((object_t *)plane_v)->sprite, sfTransparent);
}

int turn_on_sprite(void *plane_v)
{
    if (((object_t *)plane_v)->type == 'A')
        sfRectangleShape_setFillColor(((object_t *)plane_v)->rect,
        sfColor_fromRGB(255, 255, 255));
    else
        sfSprite_setColor(((object_t *)plane_v)->sprite,
        sfColor_fromRGBA(255, 255, 255, 255));
}
