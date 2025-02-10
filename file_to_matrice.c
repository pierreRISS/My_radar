/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** file_to_matrice.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "lib/my/libmy.h"

char ***file_to_matrice(char *file_content, char *separator)
{
    char **test = my_str_to_word_array(file_content, "\n");
    char ***result;
    int nbr_lines = nbr_world(file_content, "\n");

    result = malloc((nbr_lines + 1) * sizeof(char **));
    for (int i = 0; test[i] != NULL; i++){
        result[i] = my_str_to_word_array(test[i], separator);
        free(test[i]);
    }
    result[nbr_lines] = NULL;
    free(test);
    free(file_content);
    return result;
}
