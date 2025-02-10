/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday08-pierre.riss
** File description:
** my_str_to_word_array.c
*/

#include <stdlib.h>
#include <stdio.h>
#include "libmy.h"

int nbr_world(char *str, char *separator)
{
    int total = 0;
    int i = 0;

    while (is_in(str[i], separator) == 1 && str[i] != '\0') {
        i++;
    }
    while (str[i] != '\0'){
        while (is_in(str[i], separator) == 0 && str[i] != '\0'){
            i++;
        }
        while (is_in(str[i], separator) == 1 && str[i] != '\0'){
            i++;
        }
        total++;
    }
    return total;
}

char *my_copy(int len, char *str)
{
    char *result = malloc(len + 1);

    for (int i = 0; i < (len); i++){
        result[i] = str[i];
    }
    result[len] = '\0';
    return result;
}

int start_i(char *str, char *separator)
{
    int i = 0;

    while (is_in(str[i], separator) == 1 && str[i] != '\0'){
        i++;
    }
    return i;
}

char **my_str_to_word_array(char *str, char *separator)
{
    char **tab = malloc((nbr_world(str, separator) + 1) * sizeof(char *));
    int i = start_i(str, separator);
    int i_tab = 0;
    int len = 0;

    while (str[i] != '\0'){
        while (is_in(str[i], separator) == 0 && str[i] != '\0') {
            i++;
            len++;
        }
        tab[i_tab] = my_copy(len, &str[i - len]);
        i_tab++;
        len = 0;
        while (is_in(str[i], separator) == 1 && str[i] != '\0')
            i++;
        }
    tab[i_tab] = NULL;
    return tab;
}
