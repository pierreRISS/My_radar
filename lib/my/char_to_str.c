/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** char_to_str.c
*/

#include <stdlib.h>

char *char_to_str(char chara)
{
    char *str = malloc(2);

    str[0] = chara;
    str[1] = '\0';
    return str;
}
