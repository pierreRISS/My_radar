/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** int_to_str.c
*/

#include <stdlib.h>
#include "libmy.h"

char *int_to_str(long int nb)
{
    int len = count_nb(nb);
    char *str;
    long long int solo_nbr;

    str = malloc(len + 1);
    for (int i = len - 1; i >= 0; i--) {
        solo_nbr = nb / my_compute_power_rec(10, i);
        str[(len - 1) - i] = solo_nbr + 48;
        nb = nb - (solo_nbr* my_compute_power_rec(10, i));
    }
    str[len] = '\0';
    return str;
}
