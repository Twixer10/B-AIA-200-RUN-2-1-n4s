/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** printflag
*/

#include "../../../include/my.h"

void mbasic_flag(int i, va_list ap, char const *str, int fd)
{
    (str[i] == 's' ? put_mstr(va_arg(ap, char *), fd) : 0);
    (str[i] == 'd' || str[i] == 'i' ? put_mnbr(va_arg(ap, int), fd) : 0);
    (str[i] == 'c' || str[i] == 'C' ? put_mchar(va_arg(ap, int), fd) : 0);
    (str[i] == 'o' ? put_base_mnbr(va_arg(ap, int), BASE_O, fd) : 0);
    (str[i] == 'x' ? put_base_mnbr(va_arg(ap, int), BASE_MINX, fd) : 0);
    (str[i] == 'b' ? put_mbin(va_arg(ap, int), fd) : 0);
    (str[i] == 'u' ? put_munbr(va_arg(ap, unsigned int), fd) : 0);
    (str[i] == 'X' ? put_base_mnbr(va_arg(ap, int), BASE_X, fd) : 0);
    (str[i] == 'p' ? put_add_mpointer(va_arg(ap, long int), fd) : 0);
    (str[i] == 'S' ? put_all_mstr(va_arg(ap, char *), fd) : 0);
    (str[i] == '%' ? put_mchar('%', fd) : 0);
    (str[i] == ' ' ? put_mchar(' ', fd) : 0);
    (str[i] == 'n' ? put_mchar(0, fd) : 0);
}

void get_mlong(int i, va_list ap, char const *str, int fd)
{
    (str[i] == 'd' || str[i] == 'i' ? put_mlnbr(va_arg(ap, long int), fd) : 0);
    (str[i] == 'o' ? put_base_mlnbr(va_arg(ap, long int), BASE_O, fd) : 0);
    (str[i] == 'x' ? put_base_mlnbr(va_arg(ap, long int), BASE_MINX, fd) : 0);
    (str[i] == 'X' ? put_base_mlnbr(va_arg(ap, long int), BASE_X, fd) : 0);
    (str[i] == 'u' ? put_mlunbr(va_arg(ap, unsigned long), fd) : 0);
}

void get_mshort(int i, va_list ap, char const *str, int fd)
{
    (str[i] == 'd' || str[i] == 'i' ? put_mhnbr(va_arg(ap, int), fd) : 0);
    (str[i] == 'o' ? put_base_mlnbr(va_arg(ap, int), BASE_O, fd) : 0);
    (str[i] == 'x' ? put_base_mlnbr(va_arg(ap, int), BASE_MINX, fd) : 0);
    (str[i] == 'X' ? put_base_mlnbr(va_arg(ap, int), BASE_X, fd) : 0);
    (str[i] == 'u' ? put_mhunbr(va_arg(ap, unsigned int), fd) : 0);
}