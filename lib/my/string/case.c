/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** case
*/

#include "../../../include/my.h"

char *str_lowcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 65 && str[i] <= 90)
            str[i] = str[i] + 32;
        i = i + 1;
    }
    return (str);
}

char *str_upcase(char *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
        i = i + 1;
    }
    return (str);
}