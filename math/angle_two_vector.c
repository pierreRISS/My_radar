/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** angle_two_vector.c
*/
#include <math.h>
#include <SFML/Graphics/Vertex.h>
#include "math.h"

float angle_two_vector(sfVector2f vector0, sfVector2f point)
{
    sfVector2f vector1 = {1, 0};
    sfVector2f vector2 = add_vector(point, vector1);
    sfVector2f vector3 = add_vector(point, vector0);
    float angle = atan2f(vector2.y - vector3.y, vector2.x - vector3.x);

    return angle + PI;
}
