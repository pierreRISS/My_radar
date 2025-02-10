/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_revstr.c
*/
#include "libmy.h"

char *my_revstr(char *str)
{
    int len = my_strlen(str);
    int half = (len / 2);
    char save = 0;

    len = len - 1;
    for (int i = 0; i < half; i++){
        save = str[i];
        str[i] = str[(len) - i];
        str[(len) - i] = save;
    }
    return str;
}
