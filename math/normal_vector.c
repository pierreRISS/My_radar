/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** add_vector.c
*/

#include <SFML/Graphics/Vertex.h>

sfVector2f normal_vector(sfVector2f vector0)
{
    sfVector2f normal;

    normal.x = -vector0.y;
    normal.y = vector0.x;
    return normal;
}
