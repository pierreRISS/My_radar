/*
** EPITECH PROJECT, 2024
** B-CPE-101-LYN-1-1-myprintf-sacha.henneveux
** File description:
** my_is_upper.c
*/

int is_upper(char c)
{
    if (c >= 'A' && c <= 'Z') {
        return 1;
    } else {
        return 0;
    }
}
