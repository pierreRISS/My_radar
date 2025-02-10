/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** my.h
*/
#include "mylist.h"

#ifndef MYS
    #define MYS
linked_list_t *my_rev_list(linked_list_t *begin);
int my_list_size(linked_list_t *begin);
int my_apply_on_nodes(linked_list_t *begin, int(*f) (void *));
int *add_node(linked_list_t *begin, void *value);
int free_list(linked_list_t *begin, int(*f) (void *));
linked_list_t *instantiate_linked_list(void);
int my_delete_nodes(linked_list_t *begin, void *compare,
    int(*f) (void *, void *));
int is_empty(linked_list_t *begin);
linked_list_t *quicksort(linked_list_t *begin,
    int(*f) (linked_list_t *, void *, void *),
    linked_list_t *comparator,
    linked_list_t *(*cpy) (linked_list_t *));
int *merge_linked_list(linked_list_t *begin,
    linked_list_t *second_one);

#endif
