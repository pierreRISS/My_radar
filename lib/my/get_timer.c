/*
** EPITECH PROJECT, 2024
** B-PSU-100-LYN-1-1-mytop-pierre.riss
** File description:
** get_timer.c
*/

#include "time.h"

double get_time(time_t timer)
{
    time_t end = time(NULL);

    return difftime(end, timer);
}
