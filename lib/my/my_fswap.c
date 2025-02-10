/*
** EPITECH PROJECT, 2024
** my_swap.c
** File description:
** ceci swap de number
** voila
*/

void my_fswap(float *a, float *b)
{
    float save_a = *a;

    *a = *b;
    *b = save_a;
}
