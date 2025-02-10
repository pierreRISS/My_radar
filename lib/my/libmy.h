/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday08-pierre.riss
** File description:
** libmy.h
*/
#include <time.h>

#ifndef HEADERFILE_H
    #define HEADERFILE_H

void my_putchar(char c);
int my_isneg(int nb);
int my_put_nbr(int nb);
void my_swap(int *a, int *b);
int my_putstr(char const *str);
int my_strlen(char const *str);
int my_getnbr(char const *str);
void my_sort_int_array(int *tab, int size);
int my_compute_power_rec(int nb, int power);
int my_compute_square_root(int nb);
int my_is_prime(int nb);
int my_find_prime_sup(int nb);
char *my_strcpy(char *dest, char const *src);
char *my_strncpy(char *dest, char const *src, int n);
char *my_revstr(char *str);
char *my_strstr(char *str, char const *to_find);
int my_strcmp(char const *s1, char const *s2);
int my_strncmp(char const *s1, char const *s2, int n);
char *my_strupcase(char *str);
char *my_strlowcase(char *str);
char *my_strcapitalize(char *str);
int my_str_isalpha(char const *str);
int my_str_isnum(char const *str);
int my_str_islower(char const *str);
int my_str_isupper(char const *str);
int my_str_isprintable(char const *str);
int my_showstr(char const *str);
int my_showmem(char const *str, int size);
char *my_strcat(char *dest, char const *src);
char *my_strncat(char *dest, char const *src, int nb);
char *concat_params(int argc, char **argv);
int my_show_word_array(char *const *tab);
int search(char *str, int i, char const *to_find);
char *concat_str_str(char *str1, char *str2);
int str_to_int(char *str);
char *concat_str_char(char *str1, char chara);
void *emalloc(int taille);
int free_matrice(char ***matrice);
char *int_to_str(long int nb);
int count_nb(int nb);
double get_time(time_t timer);
int is_in(char x, char *separator);
int is_number(char *str);
int is_float(char *str);
int boucle_nbr(int nbr, int nbr_max);
char *char_to_str(char chara);
int is_upper(char c);
char *deep_copy_str(char *scr);
int my_puterror(char *message);
char **my_str_to_word_array(char *str, char *separator);
int nbr_world(char *str, char *separator);
void my_fswap(float *a, float *b);
int nothing(void *);

#endif
