/*
** EPITECH PROJECT, 2024
** B-MUL-100-LYN-1-1-myradar-pierre.riss
** File description:
** math.h
*/

#include <SFML/System/Export.h>
#include <SFML/Graphics.h>

#ifndef MATH
    #define MATH
    #define PI 3.141592653589793238462643383279

sfVector2f add_vector(sfVector2f vector, sfVector2f vector2);
float radiant(float degres);
sfVector2f minus_point(sfVector2f vector, sfVector2f point);
sfVector2f multiply_vector(sfVector2f vector, float multipy);
float norme(sfVector2f vector);
sfVector2f rotate_vector(sfVector2f vector, double angle);
sfVector2f multiply_vectors(sfVector2f vector0, sfVector2f vector1);
float angle_two_vector(sfVector2f vector0, sfVector2f point);
float degres(float rad);
int compare_vec(sfVector2f comp_vector, sfVector2f vector1, float prec);
sfVector2f normal_vector(sfVector2f vector0);
float dot_product(sfVector2f vector0, sfVector2f vector1);
sfVector2f orthogonal_project(sfVector2f v, sfVector2f p);
sfVector2f normalized_vector(sfVector2f vector);
sfVector2f inst_vect(float x, float y);
#endif /*PARAM*/
