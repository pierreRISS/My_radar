/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** is_in.c
*/

int is_in(char x, char *separator)
{
    for (int i = 0; separator[i] != '\0'; i++){
        if (x == separator[i]){
            return 1;
        }
    }
    return 0;
}
