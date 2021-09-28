/*
** EPITECH PROJECT, 2021
** lib/math
** File description:
** math
*/

#include "../../../include/my.h"

int my_pow(int nb, unsigned int pow)
{
    return ((pow == 0) ? 1 : (pow%2 == 0) ?
    (my_pow(nb, pow / 2) * my_pow(nb, pow / 2)) :
    (nb * my_pow(nb, pow / 2) * my_pow(nb, pow / 2)));
}

void my_swap(int *a, int *b)
{
    int c = *b;

    *b = *a;
    *a = c;
}

int compute_square_root(int nb)
{
    int i = 0;
    int j = 0;

    while (i <= nb)
    {
        j = i * i;
        if (j == nb)
            return (i);
        i = i + 1;
    }
    return (0);
}
