/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** my.h
*/
#include "myquadtree.h"

#ifndef MYQUAD_TREE
    #define MYQUAD_TREE
void quadtree_apply_infix(quad_tree_t *root,
    int (*applyf) (void *, void *), void *data_f);
quad_tree_t *inst_quad_tree(void);
int quadtree_free(quad_tree_t *root, int(*f) (void *));
#endif
