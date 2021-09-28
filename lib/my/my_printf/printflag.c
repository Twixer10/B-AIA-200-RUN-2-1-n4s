/*
** EPITECH PROJECT, 2020
** lib/my_printf
** File description:
** printflag
*/

#include "../../../include/my.h"

void basic_flag(int i, va_list ap, char const *str)
{
    (str[i] == 's' ? put_str(va_arg(ap, char *)) : 0);
    (str[i] == 'd' || str[i] == 'i' ? put_nbr(va_arg(ap, int)) : 0);
    (str[i] == 'c' || str[i] == 'C' ? put_char(va_arg(ap, int)) : 0);
    (str[i] == 'o' ? put_base_nbr(va_arg(ap, int), BASE_O) : 0);
    (str[i] == 'x' ? put_base_nbr(va_arg(ap, int), BASE_MINX) : 0);
    (str[i] == 'b' ? put_bin(va_arg(ap, int)) : 0);
    (str[i] == 'u' ? put_unbr(va_arg(ap, unsigned int)) : 0);
    (str[i] == 'X' ? put_base_nbr(va_arg(ap, int), BASE_X) : 0);
    (str[i] == 'p' ? put_add_pointer(va_arg(ap, long int)) : 0);
    (str[i] == 'S' ? put_all_str(va_arg(ap, char *)) : 0);
    (str[i] == '%' ? put_char('%') : 0);
    (str[i] == ' ' ? put_char(' ') : 0);
    (str[i] == 'n' ? put_char(0) : 0);
}

void get_long(int i, va_list ap, char const *str)
{
    (str[i] == 'd' || str[i] == 'i' ? put_lnbr(va_arg(ap, long int)) : 0);
    (str[i] == 'o' ? put_base_lnbr(va_arg(ap, long int), BASE_O) : 0);
    (str[i] == 'x' ? put_base_lnbr(va_arg(ap, long int), BASE_MINX) : 0);
    (str[i] == 'X' ? put_base_lnbr(va_arg(ap, long int), BASE_X) : 0);
    (str[i] == 'u' ? put_lunbr(va_arg(ap, unsigned long)) : 0);
}

void get_short(int i, va_list ap, char const *str)
{
    (str[i] == 'd' || str[i] == 'i' ? put_hnbr(va_arg(ap, int)) : 0);
    (str[i] == 'o' ? put_base_lnbr(va_arg(ap, int), BASE_O) : 0);
    (str[i] == 'x' ? put_base_lnbr(va_arg(ap, int), BASE_MINX) : 0);
    (str[i] == 'X' ? put_base_lnbr(va_arg(ap, int), BASE_X) : 0);
    (str[i] == 'u' ? put_hunbr(va_arg(ap, unsigned int)) : 0);
}