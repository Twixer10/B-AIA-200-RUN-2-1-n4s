/*
** EPITECH PROJECT, 2021
** lib/my_printf
** File description:
** long
*/

#include "../../../include/my.h"

void lflag(int i, va_list ap, char const *str)
{
    if (str[i] == 'l' && str[i-1] == '%') {
        i = i + 1;
        get_long(i, ap, str);
    }
}

void put_base_lnbr(long int nb, char *base)
{
    long int div = 1;
    long int res = 0;
    int i = str_len(base);

    while ((nb / div) >= i)
        div = div * i;
    while (div > 0) {
        res = (nb / div) % i;
        put_char(base[res]);
        div = div / i;
    }
}

void put_lnbr(long int nb)
{
    long int div = 1;

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
}

void put_lunbr(unsigned long int nb)
{
    long int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_char((nb / div) % 10 + '0');
        div /= 10;
    }
}