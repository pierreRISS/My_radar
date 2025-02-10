/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** is_valid_int.c
*/

#include <stdlib.h>
#include "../lib/my/libmy.h"


int is_valid_int(char *nbr, int lim_max, int lim_min)
{
    int nbr_int;

    if (is_number(nbr)){
        nbr_int = str_to_int(nbr);
        if (nbr_int >= lim_min && nbr_int < lim_max){
            return 0;
        }
        return my_puterror("argument is not in the good range");
    }
    return my_puterror("argument should be int");
}
