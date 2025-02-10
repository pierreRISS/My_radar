/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** multiply_vector.c
*/

#include <SFML/Graphics/Vertex.h>

sfVector2f multiply_vector(sfVector2f vector, float multipy)
{
    sfVector2f multiply_vector;

    multiply_vector.x = vector.x * multipy;
    multiply_vector.y = vector.y * multipy;
    return multiply_vector;
}

sfVector2f multiply_vectors(sfVector2f vector0, sfVector2f vector1)
{
    sfVector2f multiply_vector;

    multiply_vector.x = vector0.x * vector1.x;
    multiply_vector.y = vector0.y * vector1.y;
    return multiply_vector;
}
