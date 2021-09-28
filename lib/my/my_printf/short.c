/*
** EPITECH PROJECT, 2021
** lib/my_printf
** File description:
** short
*/

#include "../../../include/my.h"

void hflag(int i, va_list ap, char const *str)
{
    if (str[i] == 'h' && str[i-1] == '%') {
        i = i + 1;
        get_short(i, ap, str);
    }
}

void put_hnbr(short int nb)
{
    short int div = 1;

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

void put_hunbr(unsigned short int nb)
{
    short int div = 1;

    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        put_char((nb / div) % 10 + '0');
        div /= 10;
    }
}

void put_all_str(char *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] >= 32 && str[i] < 127)
            put_char(str[i]);
        else
            cond_all_str(i, str);
        i = i + 1;
    }
}

void cond_all_str(int i, char *str)
{
    if (str[i] <= 7) {
        put_str("\\00");
        put_base_nbr(str[i], BASE_O);
    }
    if (str[i] > 7 && str[i] < 32) {
        put_str("\\0");
        put_base_nbr(str[i], BASE_O);
    }
    if (str[i] >= 127)
        put_base_nbr(str[i], BASE_O);
}