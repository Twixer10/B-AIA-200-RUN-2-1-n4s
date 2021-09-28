/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** my_ft_putbase
*/

#include "../../../include/my.h"

void put_base_mnbr(int nb, char *base, int fd)
{
    int div = 1;
    int res = 0;
    int i = str_len(base);

    while ((nb / div) >= i)
        div = div * i;
    while (div > 0) {
        res = (nb / div) % i;
        put_mchar(base[res], fd);
        div = div / i;
    }
}

void put_mbin(int nb, int fd)
{
    int res = 0;

    if (nb >= 2) {
        res = nb % 2;
        nb = nb / 2;
        put_mbin(nb, fd);
    }
    if (nb > 0) {
        res = nb % 2;
        nb = nb / 2;
    }
    put_mchar(res + 48, fd);
}

void put_munbr(unsigned int nb, int fd)
{
    int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_mchar((nb / div) % 10 + '0', fd);
        div /= 10;
    }
}

void put_add_mpointer(long int nb, int fd)
{
    put_mstr("0x", fd);
    put_base_mlnbr(nb, BASE_MINX, fd);
}