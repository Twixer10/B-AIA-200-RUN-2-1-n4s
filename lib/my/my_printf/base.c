/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** my_ft_putbase
*/

#include "../../../include/my.h"

void put_base_nbr(int nb, char *base)
{
    int div = 1;
    int res = 0;
    int i = str_len(base);

    while ((nb / div) >= i)
        div = div * i;
    while (div > 0) {
        res = (nb / div) % i;
        put_char(base[res]);
        div = div / i;
    }
}

void put_bin(int nb)
{
    int res = 0;

    if (nb >= 2) {
        res = nb % 2;
        nb = nb / 2;
        put_bin(nb);
    }
    if (nb > 0) {
        res = nb % 2;
        nb = nb / 2;
    }
    put_char(res + 48);
}

void put_unbr(unsigned int nb)
{
    int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_char((nb / div) % 10 + '0');
        div /= 10;
    }
}

void put_add_pointer(long int nb)
{
    put_str("0x");
    put_base_lnbr(nb, BASE_MINX);
}