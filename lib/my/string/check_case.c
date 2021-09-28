/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** check_case
*/

#include "../../../include/my.h"

int is_lower(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 97 && str[i] <= 122))
            return (0);
        i = i + 1;
    }
    return (1);
}

int is_upper(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!(str[i] >= 65 && str[i] <= 90))
            return (0);
        i = i + 1;
    }
    return (1);
}