/*
** EPITECH PROJECT, 2024
** B-CPE-100-LYN-1-1-cpoolday05-pierre.riss
** File description:
** my_compute_square_root.c
*/

int my_compute_square_root(int nb)
{
    int carre = 0;

    for (int i = 0; i < 46341; i++){
        carre = i * i;
        if (carre == nb){
            return i;
        }
    }
    return 0;
}
