/*
** EPITECH PROJECT, 2024
** my_putstr.c
** File description:
** ceci swap de number
** voila
*/
#include "libmy.h"

int my_putstr(char const *str)
{
    while (*str != '\0'){
        my_putchar(*str);
        str += 1;
    }
}
