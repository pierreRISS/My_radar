/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday08-pierre.riss
** File description:
** concat_params.c
*/
#include <stdlib.h>
#include "libmy.h"

char *concat_params(int argc, char **argv)
{
    char *total = "";
    int len;

    for (int i = 0; i < argc; i++){
        len = my_strlen(argv[i]) + 1;
    }
    total = malloc(len);
    for (int i = 0; i < argc; i++){
        my_strcat(total, argv[i]);
        if (i != argc - 1){
            my_strcat(total, "\n");
        }
    }
    return total;
}
