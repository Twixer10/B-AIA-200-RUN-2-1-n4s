/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** my_printf
*/

#include "../../../include/my.h"

void my_mprintf(int fd, char const *str, ...)
{
    va_list ap;

    if (str == NULL) {
        put_mstr("(null)", fd);
        return;
    }
    va_start(ap, str);
    get_mflags(ap, str, fd);
    va_end(ap);
}

void get_mflags(va_list ap, char const *str, int fd)
{
    int i = 0;
    char p = '%';
    char L = 'l';
    char h = 'h';

    while (str[i] != '\0') {
        if (str[i] == p) {
            i = i + 1;
            mbasic_flag(i, ap, str, fd);
        } else
            put_mchar(str[i], fd);
        if ((str[i-1] == p && str[i] == L) || (str[i-1] == p && str[i] == h)) {
            mlflag(i, ap, str, fd);
            mhflag(i, ap, str, fd);
            i = i + 1;
        }
        i = i + 1;
    }
}