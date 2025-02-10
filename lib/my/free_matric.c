/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** free_matric.c
*/

#include <stdlib.h>

int free_matrice(char ***matrice)
{
    for (int i = 0; matrice[i] != NULL; i++){
        for (int j = 0; matrice[i][j] != NULL; j++){
            free(matrice[i][j]);
        }
        free(matrice[i]);
    }
    free(matrice);
}
