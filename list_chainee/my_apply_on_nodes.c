/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** : my_apply_on_nodes.c
*/

#include "stdlib.h"
#include "include/my.h"
#include "include/mylist.h"

int my_apply_on_nodes(linked_list_t *begin, int(*f) (void *))
{
    if (is_empty(begin))
        return 0;
    for (linked_list_t *link = begin; link != NULL; link = link->next){
        (*f)(link->data);
    }
}
