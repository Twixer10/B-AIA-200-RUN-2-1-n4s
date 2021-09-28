/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** my_printf
*/

#include "../../../include/my.h"

void my_printf(char const *str, ...)
{
    int i = 0;
    va_list ap;

    if (str == NULL) {
        put_str("(null)");
        return;
    }
    va_start(ap, str);
    get_flags(ap, str);
    va_end(ap);
}

void get_flags(va_list ap, char const *str)
{
    int i = 0;
    char p = '%';
    char L = 'l';
    char h = 'h';

    while (str[i] != '\0') {
        if (str[i] == p) {
            i = i + 1;
            basic_flag(i, ap, str);
        } else
            put_char(str[i]);
        if ((str[i-1] == p && str[i] == L) || (str[i-1] == p && str[i] == h)) {
            lflag(i, ap, str);
            hflag(i, ap, str);
            i = i + 1;
        }
        i = i + 1;
    }
}