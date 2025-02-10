/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** free_quadtree.c
*/

#include <stdlib.h>
#include "include/myquadtree.h"


int quadtree_free(quad_tree_t *root, int(*f) (void *))
{
    if (root->data != NULL)
        (*f)(root->data);
    if (root->next1 != NULL){
        quadtree_free(root->next1, f);
    }
    if (root->next2 != NULL){
        quadtree_free(root->next2, f);
    }
    if (root->next3 != NULL){
        quadtree_free(root->next3, f);
    }
    if (root->next4 != NULL){
        quadtree_free(root->next4, f);
    }
    free(root);
}
