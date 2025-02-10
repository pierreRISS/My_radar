/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_strupcase.c
*/

char *my_strupcase(char *str)
{
    int i = 0;

    while (str[i] != '\0'){
        if (96 < str[i] && str[i] < 123){
            str[i] = str[i] - 32;
        }
        i++;
    }
    return str;
}
