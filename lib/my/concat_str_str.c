/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-myls-pierre.riss
** File description:
** my_two_str.c
*/
#include <stdlib.h>
#include "libmy.h"

char *concat_str_str(char *str1, char *str2)
{
    char *str = malloc(my_strlen(str1) + my_strlen(str2)+1);
    int i = 0;

    for (; str1[i] != '\0'; i++){
        str[i] = str1[i];
    }
    for (int j = 0; str2[j] != '\0'; j++){
        str[i] = str2[j];
        i++;
    }
    str[i] = '\0';
    return str;
}
