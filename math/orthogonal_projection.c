/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** add_vector.c
*/

#include <SFML/Graphics/Vertex.h>
#include "math.h"

sfVector2f orthogonal_project(sfVector2f v, sfVector2f p)
{
    return multiply_vector(v, dot_product(v, p));
}
