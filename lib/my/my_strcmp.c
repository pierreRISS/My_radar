/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_strcmp.c
*/

#include <string.h>

int my_strcmp(char const *s1, char const *s2)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0'){
        i++;
    }
    if (s1[i] == '\0' && s2[i] == '\0'){
        return 0;
    } else if (s1[i] == '\0') {
        return - (i + 1);
    }
    if (s2[i] == '\0') {
        return (i + 1);
    }
    if (s1[i] < s2[i]){
        return - (i + 1);
    } else {
        return (i + 1);
    }
}
