/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** struct.h
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include "../quad_tree/include/myquadtree.h"
#include "../list_chainee/include/mylist.h"

#ifndef STRUCT
    #define STRUCT

typedef struct vector2 {
    int x;
    int y;
} vector2_t;

typedef struct int_array {
    float *array;
    int len;
} int_array_t;

struct time_setting {
    sfClock *clock;
    int nbr_fps;
    long int secondes_start;
    long int last_secondes;
    float delta_time;
};

struct event_key {
    int l;
    int s;
};

struct min_max {
    float min;
    float max;
};

struct collision_buffer {
    sfVector2f *vect;
    sfTransform *transfo;
    struct min_max *min_max;
};

struct data_collision {
    void *object;
    struct collision_buffer *col_buff;
};

struct rect_quadri {
    sfVector2f cordonate;
    sfVector2f size;
    linked_list_t *begin;
};

typedef struct object {
    char type;
    sfSprite *sprite;
    sfVector2f orignial_pos;
    sfVector2f arrival_pos;
    int speed;
    int delay;
    int radius;
    sfVector2f speed_vec;
    sfRectangleShape *rect;
    sfCircleShape *circ;
    int dead;
    int wait;
    int disp;
    int checked_colision;
} object_t;

struct spirte_object {
    char *path;
    sfVector2f cordo;
    sfVector2f size;
    sfVector2f hitbox;
};

struct mult_lists {
    linked_list_t *bottom_right;
    linked_list_t *bottom_left;
    linked_list_t *right_top;
    linked_list_t *left_top;
};

struct setting {
    sfRenderWindow *windows;
    sfSprite *background;
    sfText *timer;
    quad_tree_t *tree;
    linked_list_t *objects_l;
    linked_list_t *ctrl_twr;
    struct time_setting *time_set;
    struct event_key *evt_key;
    struct data_collision *data_coll;
};
#endif
