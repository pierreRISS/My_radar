/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** norme_vector.c
*/

#include <math.h>
#include <SFML/Graphics/Vertex.h>
#include "math.h"

sfVector2f normalized_vector(sfVector2f vector)
{
    float norme = sqrt(((vector.x * vector.x) + (vector.y * vector.y)));

    return multiply_vector(vector, (1 / norme));
}
