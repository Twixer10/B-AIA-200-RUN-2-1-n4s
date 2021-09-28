/*
** EPITECH PROJECT, 2021
** lib/get
** File description:
** string
*/

#include "../../../include/my.h"

int str_len(char const *str)
{
    int i = 0;

    if (str == NULL)
        return (0);
    while (str[i]) {
        i++;
    }
    return (i);
}

char *my_itoa(int nb)
{
    int len = 0;
    char *str;
    int tmp = nb;

    while (tmp > 0) {
        tmp /= 10;
        len++;
    }
    str = MALLOC(str, (sizeof(*str) * (len + 1)), NULL)
    str[len] = '\0';
    while (len--) {
        str[len] = nb % 10  + '0';
        nb /= 10;
    }
    return (str);
}