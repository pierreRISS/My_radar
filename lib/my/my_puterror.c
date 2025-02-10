/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday12-pierre.riss
** File description:
** my_puterror.c
*/
#include "libmy.h"
#include "unistd.h"
#include <stdlib.h>

int my_puterror(char *message)
{
    int nbr_octet = my_strlen(message) +1;

    write(2, message, nbr_octet);
    return 1;
}
