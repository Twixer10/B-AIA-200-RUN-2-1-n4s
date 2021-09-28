/*
** EPITECH PROJECT, 2021
** lib/write
** File description:
** number
*/

#include "../../../include/my.h"

int put_nbr(int nb)
{
    int div = 1;

    if (nb < 0) {
        put_char('-');
        nb *= -1;
    }
    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_char((nb / div) % 10 + '0');
        div /= 10;
    }
    return (0);
}

int put_mnbr(int nb, int fd)
{
    int div = 1;

    if (nb < 0) {
        put_mchar('-', fd);
        nb *= -1;
    }
    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_mchar((nb / div) % 10 + '0', fd);
        div /= 10;
    }
    return (0);
}