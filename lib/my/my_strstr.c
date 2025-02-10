/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday06-pierre.riss
** File description:
** my_strstr.c
*/

int search(char *str, int i, char const *to_find)
{
    int index = 0;

    while (str[i + index] == to_find[index]){
        index++;
        if (to_find[index] == '\0'){
            return 1;
        }
    }
}

char *my_strstr(char *str, char const *to_find)
{
    int i = 0;

    while (str[i] != '\0'){
        if (search(str, i, to_find) == 1){
            return &str[i];
        }
        i++;
    }
    return 0;
}
