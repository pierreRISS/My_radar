/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** inititalized_list.c
*/

#include "stdlib.h"
#include "include/mylist.h"

linked_list_t *instantiate_linked_list(void)
{
    linked_list_t *start = malloc(sizeof(linked_list_t));

    start->data = NULL;
    start->next = NULL;
    return start;
}
