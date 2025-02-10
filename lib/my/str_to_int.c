/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** str_to_int.c
*/
#include "libmy.h"

int str_to_int(char *str)
{
    int i = 0;
    int total = 0;
    int len = my_strlen(str)-1;

    if (str[0] == '-'){
        i++;
    }
    for (; str[i] != '\0'; i++){
        total += (str[i] - 48) * my_compute_power_rec(10, len - i);
    }
    if (str[0] == '-'){
        total = -total;
    }
    return total;
}
