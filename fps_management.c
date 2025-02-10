/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myhunter-pierre.riss
** File description:
** apply_on_birds.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <math.h>
#include <stdlib.h>
#include "include/struct.h"
#include "include/my.h"
#include "include/param.h"

void frame_calulator(struct time_setting *time_set)
{
    if (time_set->nbr_fps == FPS){
        time_set->nbr_fps = 0;
    }
    time_set->nbr_fps += 1;
}

void delta_time_calculator(struct time_setting *time_set)
{
    long int diff;

    time_set->last_secondes = (long int)time_set->secondes_start;
    time_set->secondes_start = (sfClock_getElapsedTime
    (time_set->clock).microseconds);
    diff = time_set->secondes_start - time_set->last_secondes;
    time_set->delta_time = (100.0*(diff / 100000000.0));
}

void time_calculator(struct time_setting *time_set)
{
    frame_calulator(time_set);
    delta_time_calculator(time_set);
}
