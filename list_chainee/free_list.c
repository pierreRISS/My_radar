/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** free_list.c
*/

#include "stdlib.h"
#include "include/mylist.h"
#include "include/my.h"

int free_list(linked_list_t *begin, int(*f) (void *))
{
    linked_list_t *link;
    linked_list_t *next_link;

    if (begin->next == NULL){
        (*f)(begin->data);
        free(begin);
        return 0;
    }
    next_link = begin->next->next;
    link = begin->next;
    while (next_link != NULL){
        next_link = link->next;
        (*f)(link->data);
        free(link);
        link = next_link;
    }
    (*f)(begin->data);
    free(link);
    free(begin);
}
