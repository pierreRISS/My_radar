/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-pierre.riss
** File description:
** my_is_prime.c
*/

int my_is_prime(int nb)
{
    for (int i = 2; i < nb; i++){
        if ((nb % i) == 0){
            return 0;
        }
    }
    if (nb <= 1){
        return 0;
    }
    return 1;
}
