/*
** EPITECH PROJECT, 2021
** lib/number
** File description:
** check
*/

#include "../../../include/my.h"

int is_neg(int n)
{
    (n<0 ? put_char('N') : put_char('P'));
    return (0);
}

int is_prime(int nb)
{
    int i = 0;

    if (nb == 2)
        return (1);
    if (nb < 2)
        return (0);
    if ((nb % 2) == 0)
        return (0);
    else
        i = 3;
    while ((i * i) <= nb) {
        if ((nb % i) == 0)
            return (0);
        i = i + 1;
    }
    return (1);
}

int find_prime_sup(int nb)
{
    int j = 1;

    while (j == 1)
    {
        nb = nb + 1;
        if (is_prime(nb) == 1)
            return (nb);
    }
    return (0);
}