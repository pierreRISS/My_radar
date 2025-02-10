/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** event.c
*/

#include <SFML/Graphics/Rect.h>
#include <SFML/Graphics/Types.h>
#include <SFML/Graphics/Vertex.h>
#include <stddef.h>
#include "include/struct.h"
#include "include/my.h"

void key_pressed(sfKeyCode key, struct event_key *evt_key,
    linked_list_t *planes, linked_list_t *ctrl_twrs)
{
    if (key == sfKeyL){
        if (evt_key->l == 0){
            my_apply_on_nodes(planes, &turn_on_hitbox_plane);
            my_apply_on_nodes(ctrl_twrs, &turn_on_hitbox_plane);
        } else {
            my_apply_on_nodes(planes, &turn_off_hitbox_plane);
            my_apply_on_nodes(ctrl_twrs, &turn_off_hitbox_plane);
        }
        evt_key->l = !evt_key->l;
    }
    if (key == sfKeyS){
        if (evt_key->s == 0){
            my_apply_on_nodes(planes, &turn_on_sprite);
            my_apply_on_nodes(ctrl_twrs, &turn_on_sprite);
        } else {
            my_apply_on_nodes(planes, &turn_off_sprite);
            my_apply_on_nodes(ctrl_twrs, &turn_off_sprite);
        }
        evt_key->s = !evt_key->s;
    }
}

void event(sfRenderWindow *win, struct event_key *evt_key,
    linked_list_t *planes, linked_list_t *ctrl_twrs)
{
    sfEvent event;

    while (sfRenderWindow_pollEvent(win, &event)){
        if (event.type == sfEvtClosed)
            sfRenderWindow_close(win);
        if (event.type == sfEvtKeyPressed)
            key_pressed(event.key.code, evt_key, planes, ctrl_twrs);
    }
}
