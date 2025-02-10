/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-pierre.riss
** File description:
** my_find_prime_sup.c
*/
#include "libmy.h"

int my_find_prime_sup(int nb)
{
    if (my_is_prime(nb) == 1 && nb != 1){
        return nb;
    } else {
        return my_find_prime_sup(nb + 1);
    }
}
