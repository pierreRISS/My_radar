/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** norme_vector.c
*/

#include <math.h>
#include <SFML/Graphics/Vertex.h>

float norme(sfVector2f vector)
{
    return sqrt(((vector.x * vector.x) + (vector.y * vector.y)));
}
