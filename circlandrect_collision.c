/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** circl&rect_collision.c
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

int is_coll_circle_rect(sfRectangleShape *collider0, sfVector2f circle_pos,
    float radius, struct collision_buffer *coll_buff)
{
    sfRectangleShape_getTransform(collider0);
    fill_vects_with_collider(coll_buff, collider0, 0, 3);
    for (int i = 0; i < 4; i++){
        if (radius >= norme(minus_point(circle_pos, coll_buff->vect[i]))){
            return 1;
        }
    }
    return 0;
}
