/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** emalloc.c
*/

#include <stdlib.h>
#include "libmy.h"

void *emalloc(int taille)
{
    void *space = malloc(taille);

    if (space == NULL){
        my_puterror("Malloc failed\n not enough memoy availbe\n");
    }
    return space;
}
