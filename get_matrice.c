/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** get_matrice.c
*/

#include <stdlib.h>
#include "include/my.h"
#include "lib/my/libmy.h"
#include "include/struct.h"

char ***get_matrice(char *path, char *separator)
{
    char *file_content = read_file(path);

    if (file_content == NULL){
        return NULL;
    }
    return file_to_matrice(file_content, separator);
}
