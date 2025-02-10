/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** add_vector.c
*/

#include <SFML/Graphics/Vertex.h>

float dot_product(sfVector2f vector0, sfVector2f vector1)
{
    return ((vector0.x * vector1.x) + (vector0.y * vector1.y));
}
