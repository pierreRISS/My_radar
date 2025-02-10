/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** add_vector.c
*/

#include <SFML/Graphics/Vertex.h>

sfVector2f add_vector(sfVector2f vector, sfVector2f vector2)
{
    sfVector2f add_point;

    add_point.x = vector.x + vector2.x;
    add_point.y = vector.y + vector2.y;
    return add_point;
}
