/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_strlowcase.c
*/

char *my_strlowcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (64 < str[i] && str[i] < 91){
            str[i] = str[i] + 32;
        }
        i++;
    }
    return str;
}
