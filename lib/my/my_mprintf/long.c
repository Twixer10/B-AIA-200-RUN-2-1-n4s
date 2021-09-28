/*
** EPITECH PROJECT, 2021
** lib/my_printf
** File description:
** long
*/

#include "../../../include/my.h"

void mlflag(int i, va_list ap, char const *str, int fd)
{
    if (str[i] == 'l' && str[i-1] == '%') {
        i = i + 1;
        get_mlong(i, ap, str, fd);
    }
}

void put_base_mlnbr(long int nb, char *base, int fd)
{
    long int div = 1;
    long int res = 0;
    int i = str_len(base);

    while ((nb / div) >= i)
        div = div * i;
    while (div > 0) {
        res = (nb / div) % i;
        put_mchar(base[res], fd);
        div = div / i;
    }
}

void put_mlnbr(long int nb, int fd)
{
    long int div = 1;

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
}

void put_mlunbr(unsigned long int nb, int fd)
{
    long int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_mchar((nb / div) % 10 + '0', fd);
        div /= 10;
    }
}