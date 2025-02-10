/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_list_size.c
*/

#include "stdlib.h"
#include "include/mylist.h"

int my_list_size(linked_list_t *begin)
{
    linked_list_t link;
    int i = 0;

    for (linked_list_t *link = begin; link != NULL;
        link = link->next) {
        i++;
    }
    return i;
}
