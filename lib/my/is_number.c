/*
** EPITECH PROJECT, 2024
** B-CPE-110-LYN-1-1-settingup-pierre.riss
** File description:
** is_number.c
*/

int is_number(char *str)
{
    int i = 0;

    if (str[0] == '-'){
        if (str[1] != '\0' && (0 <= str[1] && str[1] >= 9)){
            i = 1;
        }
    }
    for (; str[i] != '\0'; i++){
        if (!('0' <= str[i] && '9' >= str[i])){
            return 0;
        }
    }
    return 1;
}
