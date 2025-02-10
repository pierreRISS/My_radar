/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** inst_quadtree.c
*/

#include <stdlib.h>
#include "include/myquadtree.h"
#include "../lib/my/libmy.h"

quad_tree_t *inst_quad_tree(void)
{
    quad_tree_t *tree = emalloc(sizeof(quad_tree_t));

    tree->data = NULL;
    tree->next1 = NULL;
    tree->next2 = NULL;
    tree->next3 = NULL;
    tree->next4 = NULL;
    return tree;
}
