/*
** EPITECH PROJECT, 2021
** lib/my_printf
** File description:
** short
*/

#include "../../../include/my.h"

void mhflag(int i, va_list ap, char const *str, int fd)
{
    if (str[i] == 'h' && str[i-1] == '%') {
        i = i + 1;
        get_mshort(i, ap, str, fd);
    }
}

void put_mhnbr(short int nb, int fd)
{
    short int div = 1;

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

void put_mhunbr(unsigned short int nb, int fd)
{
    short int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_mchar((nb / div) % 10 + '0', fd);
        div /= 10;
    }
}

void put_all_mstr(char *str, int fd)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] < 127)
            put_mchar(str[i], fd);
        else
            cond_all_mstr(i, str, fd);
        i = i + 1;
    }
}

void cond_all_mstr(int i, char *str, int fd)
{
    if (str[i] <= 7) {
        put_mstr("\\00", fd);
        put_base_mnbr(str[i], BASE_O, fd);
    }
    if (str[i] > 7 && str[i] < 32) {
        put_mstr("\\0", fd);
        put_base_mnbr(str[i], BASE_O, fd);
    }
    if (str[i] >= 127)
        put_base_mnbr(str[i], BASE_O, fd);
}