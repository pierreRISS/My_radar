/*
** EPITECH PROJECT, 2024
** temp_setting_up
** File description:
** add_node.c
*/

#include "stdlib.h"
#include "include/mylist.h"

int *add_node(linked_list_t *begin, void *value)
{
    linked_list_t *link = begin;
    linked_list_t *add;

    if (begin->data == NULL && begin->next == NULL){
        begin->data = value;
        begin->next = NULL;
        return 0;
    }
    for (; link->next != NULL; link = link->next){
    }
    add = malloc(sizeof(linked_list_t));
    add->data = value;
    add->next = NULL;
    link->next = add;
}
