/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday07-pierre.riss
** File description:
** my_put_nbr.c
*/
#include "libmy.h"

int my_size_int(int nb)
{
    int len = 0;

    while (nb >= 1) {
        nb = nb / 10;
        len++;
    }
    return len;
}

int my_put_nbr(int nb)
{
    int len;
    char str[15];
    int solo_nbr;

    if (nb < 0){
        my_putstr("-");
        nb = nb * -1;
    }
    if (nb == 0) {
        my_putstr("0");
    }
    len = my_size_int(nb) -1;
    for (int i = len; i >= 0; i--) {
        solo_nbr = nb / my_compute_power_rec(10, i);
        str[len - i] = solo_nbr + 48;
        nb = nb - (solo_nbr* my_compute_power_rec(10, i));
    }
    str[len + 1] = '\0';
    my_putstr(str);
}
