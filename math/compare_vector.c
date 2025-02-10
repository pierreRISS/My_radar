/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** compare_vector.c
*/

#include <math.h>
#include <SFML/Graphics/Vertex.h>
#include "math.h"

int compare_vec(sfVector2f comp_vector, sfVector2f vector1, float prec)
{
    if (comp_vector.x >= (vector1.x - prec)
    && comp_vector.x <= (vector1.x + prec)
    && comp_vector.y >= (vector1.y - prec)
    && comp_vector.y <= (vector1.y + prec)){
        return 1;
    }
    return 0;
}
