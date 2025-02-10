/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** mylist.h
*/

#include <sys/stat.h>
#include <dirent.h>

#ifndef QUAD_TREE_S
    #define QUAD_TREE_S

typedef struct quad_tree {
    void *data;
    struct quad_tree *next1;
    struct quad_tree *next2;
    struct quad_tree *next3;
    struct quad_tree *next4;
} quad_tree_t;


#endif
