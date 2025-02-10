/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-organized-pierre.riss
** File description:
** deep_copy_str.c
*/

#include <stdlib.h>
#include "libmy.h"

char *deep_copy_str(char *scr)
{
    char *str = malloc(my_strlen(scr) + 1);

    my_strcpy(str, scr);
    return str;
}
