/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
** File description:
** my_find_node.c
*/

#include "stdlib.h"
#include "include/mylist.h"

int my_apply_on_matching_nodes(linked_list_t *begin, int(*f) (),
    void const *data_ref, int(*cmp) ())
{
    int i = 2;
    linked_list_t *link = begin;

    for (; link->next != 0; i++){
        if (((*cmp) (link->data, begin)) == 0){
            link->next = link->next->next;
        }
        link = link->next;
    }
    return i;
}
