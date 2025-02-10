/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** colision_detection.c
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

void fill_vects_with_collider(struct collision_buffer *coll_buff,
    sfRectangleShape *collider, int i_start, int i_end)
{
    sfVector2f origne = {0, 0};
    int index = 0;

    (*coll_buff->transfo) = sfRectangleShape_getTransform(collider);
    for (int i = i_start; i < i_end + 1; i++){
        coll_buff->vect[i] = sfTransform_transformPoint(coll_buff->transfo,
        sfRectangleShape_getPoint(collider, index));
        index++;
    }
}

sfVector2f get_axis(int i, sfRectangleShape *collider,
    struct collision_buffer *coll_buff)
{
    sfVector2f point0 = sfTransform_transformPoint(coll_buff->transfo,
    sfRectangleShape_getPoint(collider, boucle_nbr(i - 1, 3)));
    sfVector2f point1 = sfTransform_transformPoint(coll_buff->transfo,
    sfRectangleShape_getPoint(collider, boucle_nbr(i, 3)));

    return normalized_vector(normal_vector(minus_point(point0, point1)));
}

struct min_max *find_min_max(sfVector2f axis,
    struct collision_buffer *coll_buff, int i_start, int i_end)
{
    float dot_prod;

    coll_buff->min_max->min = fabs(dot_product(axis,
    coll_buff->vect[i_start]));
    coll_buff->min_max->max = fabs(dot_product(axis,
    coll_buff->vect[i_start + 1]));
    if (coll_buff->min_max->max < coll_buff->min_max->min)
        my_fswap(&coll_buff->min_max->min, &coll_buff->min_max->max);
    for (int i = i_start + 2; i < (i_end + 1); i++){
        dot_prod = fabs(dot_product(axis, coll_buff->vect[i]));
        if (dot_prod < coll_buff->min_max->min)
            coll_buff->min_max->min = dot_prod;
        if (dot_prod > coll_buff->min_max->max)
            coll_buff->min_max->max = dot_prod;
    }
    return coll_buff->min_max;
}

int is_a_gap(sfVector2f axis, struct collision_buffer *coll_buff)
{
    struct min_max collider0 = *find_min_max(axis, coll_buff, 0, 3);
    struct min_max collider1 = *find_min_max(axis, coll_buff, 4, 7);

    if (!((collider0.max >= collider1.min && collider0.max <= collider1.max)
    || (collider0.min >= collider1.min && collider0.min <= collider1.max))){
        return 1;
    }
    return 0;
}

int collision_detection(sfRectangleShape *collider0,
    sfRectangleShape *collider1, struct collision_buffer *coll_buff)
{
    sfVector2f axis;

    fill_vects_with_collider(coll_buff, collider0, 0, 3);
    fill_vects_with_collider(coll_buff, collider1, 4, 7);
    for (int i = 0; i < 2; i++){
        (*coll_buff->transfo) = sfRectangleShape_getTransform(collider0);
        axis = get_axis(i, collider0, coll_buff);
        if (is_a_gap(axis, coll_buff) == 1){
            return 0;
        }
    }
    return 1;
}
