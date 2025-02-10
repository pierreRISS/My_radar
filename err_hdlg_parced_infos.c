/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** parce_infos.c
*/

#include "limits.h"
#include "lib/my/libmy.h"
#include "include/my.h"
#include "list_chainee/include/my.h"
#include "error_handling/my.h"
#include "include/param.h"

int is_expected_args(char **list, int nbr_expcted)
{
    int j = 0;

    for (; list[j] != NULL && j < nbr_expcted; j++){
    }
    if (j != nbr_expcted || list[j] != NULL){
        return 1;
    }
    return 0;
}

int err_hdlg_plane(char **line)
{
    if (is_expected_args(line, 7)){
        return my_puterror("Plane must take 6 arguments\n");
    }
    if (is_valid_int(line[1], MAX_X, 0) == 1
    || is_valid_int(line[2], MAX_Y, 0) == 1
    || is_valid_int(line[3], MAX_X, 0) == 1
    || is_valid_int(line[4], MAX_Y, 0) == 1
    || is_valid_int(line[5], INT_MAX, 1) == 1
    || is_valid_int(line[6], INT_MAX, 0) == 1){
        return 1;
    }
}

int err_hdlg_tower(char **line)
{
    if (is_expected_args(line, 4)){
        return my_puterror("Control tower must take 3 arguments\n");
    }
    if (is_valid_int(line[1], MAX_X, 0) == 1
    || is_valid_int(line[2], MAX_Y, 0) == 1
    || is_valid_int(line[3], INT_MAX, 0) == 1){
        return 1;
    }
}

int err_hdlg_parced_infos(char ***infos)
{
    for (int i = 0; infos[i] != NULL; i++){
        if (infos[i][0] == NULL
        || !((*infos[i][0]) == 'T' || (*infos[i][0] == 'A'))){
            return my_puterror("should be A or T\n");
        }
        if ((*infos[i][0]) == 'A' && err_hdlg_plane(infos[i]) == 1){
            return 1;
        }
        if ((*infos[i][0]) == 'T' && err_hdlg_tower(infos[i]) == 1){
            return 1;
        }
    }
}
