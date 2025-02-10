/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-organized-pierre.riss
** File description:
** is_empty.c
*/

#include "stdlib.h"
#include "include/mylist.h"

int is_empty(linked_list_t *begin)
{
    if (begin->data == NULL && begin->next == NULL)
        return 1;
    return 0;
}
