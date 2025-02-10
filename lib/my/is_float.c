/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** is_float.c
*/

/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** is_number.c
*/
#include "libmy.h"

int is_float(char *str)
{
    int i = 0;

    if (str[0] == '-'){
        if (str[1] != '\0' && (0 <= str[1] && str[1] >= 9)){
            i = 1;
        }
    }
    for (; str[i] != '\0' && str[i] != '.'; i++){
        if (!('0' <= str[i] && '9' >= str[i])){
            return 0;
        }
    }
    if (str[i + 1] == '-')
        return 0;
    if (str[i] == '.' && is_number(&str[i + 1])){
        return 1;
    }
    return 0;
}
