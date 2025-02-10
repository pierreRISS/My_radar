/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** create_sprites.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <math.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/param.h"
#include "include/struct.h"
#include "math/math.h"

sfRectangleShape *create_hitbox(char *path, sfVector2f cordo,
    sfVector2f size, sfVector2f hitbox)
{
    sfRectangleShape *rect = sfRectangleShape_create();
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    sfRectangleShape_setOrigin(rect, multiply_vector(size, 0.5));
    sfRectangleShape_setSize(rect, size);
    sfRectangleShape_setOutlineThickness(rect, 2.5);
    sfRectangleShape_setOutlineColor(rect, sfRed);
    sfRectangleShape_setPosition(rect, cordo);
    sfRectangleShape_setTexture(rect, texture, sfFalse);
    return rect;
}

sfCircleShape *create_circle_hitbox(char *path, sfVector2f cordo, float radius)
{
    sfCircleShape *circ = sfCircleShape_create();
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    sfCircleShape_setOrigin(circ, inst_vect(radius, radius));
    sfCircleShape_setOutlineThickness(circ, 5);
    sfCircleShape_setOutlineColor(circ, sfGreen);
    sfCircleShape_setPosition(circ, cordo);
    sfCircleShape_setRadius(circ, radius);
    sfCircleShape_setFillColor(circ, sfTransparent);
    return circ;
}

sfSprite *create_sprite(char *path, sfVector2f cordo,
    sfVector2f size, sfVector2f hitbox)
{
    sfSprite *sprite = sfSprite_create();
    sfTexture *texture = sfTexture_createFromFile(path, NULL);

    sfSprite_setTexture(sprite, texture, sfTrue);
    sfSprite_setPosition(sprite, minus_point(cordo, hitbox));
    sfSprite_setScale(sprite, size);
    return sprite;
}

sfRenderWindow *create_windows(void)
{
    sfRenderWindow *window;
    sfVideoMode mode = {MAX_X, MAX_Y, 1000};

    window = sfRenderWindow_create(mode, "My_radar", sfClose, NULL);
    sfRenderWindow_setFramerateLimit(window, FPS);
    return window;
}

sfText *create_text(int size, sfVector2f pos, char *path_font)
{
    sfVector2f taille = {1, 1};
    sfText *text = sfText_create();
    sfFont *font = sfFont_createFromFile(path_font);

    sfText_setCharacterSize(text, size);
    sfText_setFont(text, font);
    sfText_setScale(text, taille);
    sfText_setPosition(text, pos);
    return text;
}
