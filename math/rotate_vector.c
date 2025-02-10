/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** main.c
*/

#include <math.h>
#include <SFML/Graphics/Vertex.h>

sfVector2f rotate_vector(sfVector2f vector, double angle)
{
    sfVector2f rotated_vector;

    rotated_vector.x = ((vector.x * cos(angle)) - (vector.y * sin(angle)));
    rotated_vector.y = ((vector.x * sin(angle)) + (vector.y * cos(angle)));
    return rotated_vector;
}
