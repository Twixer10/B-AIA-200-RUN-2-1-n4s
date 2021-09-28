/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** check_char
*/

#include "../../../include/my.h"

int is_alpha(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!((str[i] > 64 && str[i] < 91) ||
            (str[i] > 96 && str[i] < 123)))
            return (0);
        i = i + 1;
    }
    return (1);
}

int is_alphanum(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (str[i] >= '0' && str[i] <= '9')
            return (1);
        else if ((str[i] >= 'A' && str[i] <= 'Z') ||
        (str[i] >= 'a' && str[i] <= 'z'))
            return (1);
        else
            return (0);
        i++;
    }
    return (1);
}

int is_printable(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 32 && str[i] < 127))
            return (0);
        i = i + 1;
    }
    return (1);
}