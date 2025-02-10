/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-pierre.riss
** File description:
** my_compute_power_rec.c
*/

int my_compute_power_rec(int nb, int p)
{
    if (p == 0){
        return 1;
    }
    if (p < 0){
        return 0;
    }
    return nb * my_compute_power_rec(nb, p - 1);
}
