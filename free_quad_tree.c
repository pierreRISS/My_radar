/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** main.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <math.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include "lib/my/libmy.h"
#include "math/math.h"
#include "include/param.h"
#include "quad_tree/include/myquadtree.h"
#include "quad_tree/include/my.h"

int free_quad_tree_data(void *rect)
{
    linked_list_t *list = ((struct rect_quadri *)rect)->begin;

    if (((struct rect_quadri *)rect)->size.x != MAX_X){
        free_list(list, &nothing);
    }
    free(rect);
}
