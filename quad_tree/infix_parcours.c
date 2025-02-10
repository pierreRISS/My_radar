/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** infix_parcours.c
*/
#include <stdlib.h>
#include "include/myquadtree.h"

void quadtree_apply_infix(quad_tree_t *root,
    int (*applyf) (void *, void *), void *data_f)
{
    if (root->next1 != NULL){
        quadtree_apply_infix(root->next1, applyf, data_f);
    }
    if (root->data != NULL){
        (*applyf) (root->data, data_f);
    }
    if (root->next2 != NULL){
        quadtree_apply_infix(root->next2, applyf, data_f);
    }
    if (root->next3 != NULL){
        quadtree_apply_infix(root->next3, applyf, data_f);
    }
    if (root->next4 != NULL){
        quadtree_apply_infix(root->next4, applyf, data_f);
    }
}
