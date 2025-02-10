/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** timer.c
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>
#include <SFML/Graphics/Rect.h>
#include <math.h>
#include <stdlib.h>
#include "include/my.h"
#include "include/struct.h"
#include "lib/my/libmy.h"
#include "math/math.h"
#include "include/param.h"
#include "quad_tree/include/myquadtree.h"
#include "quad_tree/include/my.h"

void timer(sfRenderWindow *win, sfText *text, int time)
{
    sfText_setString(text, int_to_str(time));
    sfRenderWindow_drawText(win, text, NULL);
}
