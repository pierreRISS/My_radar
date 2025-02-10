/*
** EPITECH PROJECT, 2024
** my_swap.c
** File description:
** ceci swap de number
** voila
*/

void my_swap(int *a, int *b)
{
    int save_a = *a;

    *a = *b;
    *b = save_a;
}
