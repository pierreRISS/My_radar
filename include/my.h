/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** param.h
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include "struct.h"
#include "../list_chainee/include/my.h"

#ifndef MY
    #define MY
sfRenderWindow *create_windows(void);
char *read_file(char *path);
char ***get_matrice(char *path, char *separator);
char ***file_to_matrice(char *file_content, char *separator);
int err_hdlg_parced_infos(char ***infos);
void event(sfRenderWindow *win, struct event_key *evt_key,
    linked_list_t *planes, linked_list_t *ctrl_twrs);
void time_calculator(struct time_setting *time_set);
int collision_detection(sfRectangleShape *collider0,
    sfRectangleShape *collider1, struct collision_buffer *coll_buff);
quad_tree_t *quadrilater(sfVector2f size, sfVector2f pos,
    linked_list_t *begin);
int collision_planes(void *rect_quadri_v, void *coll_data_v);
struct setting *instantice_param(void);
void apply_on_object(object_t *object, struct setting *param);
linked_list_t **parce_infos_file(char *path);
int is_coll_circle_rect(sfRectangleShape *collider0,
    sfVector2f circle_pos, float radius,
    struct collision_buffer *coll_buff);
int collision_ctrl_tower(linked_list_t *ctrl_twrs,
    quad_tree_t *tree, struct data_collision *data_coll);
void disp_ctrltwr(object_t *object, struct setting *param);
sfSprite *create_ctrl_tower(char *path, sfVector2f cordo,
    sfVector2f size, sfVector2f hitbox);
sfSprite *create_sprite(char *path, sfVector2f cordo,
    sfVector2f size, sfVector2f hitbox);
sfCircleShape *create_circle_hitbox(char *path,
    sfVector2f cordo, float radius);
sfRectangleShape *create_hitbox(char *path, sfVector2f cordo,
    sfVector2f size, sfVector2f hitbox);
void fill_vects_with_collider(struct collision_buffer *coll_buff,
    sfRectangleShape *collider, int i_start, int i_end);
int delete_node(void *object, void *arg2);
int free_quad_tree_data(void *rect);
sfText *create_text(int size, sfVector2f pos, char *path_font);
void timer(sfRenderWindow *win, sfText *text, int time);
int turn_on_hitbox_plane(void *plane_v);
int turn_off_hitbox_plane(void *plane_v);
int turn_on_sprite(void *plane_v);
int turn_off_sprite(void *plane_v);
#endif
