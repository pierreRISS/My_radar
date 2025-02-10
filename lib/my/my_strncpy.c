/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_strncpy.c
*/

char *my_strncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (i < n){
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}
