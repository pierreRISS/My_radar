/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday07-pierre.riss
** File description:
** my_strcat.c
*/
#include "libmy.h"

char *my_strcat(char *dest, char const *src)
{
    int i = my_strlen(dest);
    int j = 0;

    while (src[j] != '\0'){
        dest[j + i] = src[j];
        j++;
    }
    dest[i + j] = '\0';
    return dest;
}
