/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** add_point_vector.c
*/

#include <SFML/Graphics/Vertex.h>

sfVector2f minus_point(sfVector2f vector, sfVector2f point)
{
    sfVector2f add_point;

    add_point.x = vector.x - point.x;
    add_point.y = vector.y - point.y;
    return add_point;
}
