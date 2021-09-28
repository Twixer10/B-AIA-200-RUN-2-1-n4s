/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** check_num
*/

#include "../../../include/my.h"

int is_num(char const *str)
{
    int i = 0;

    while (str[i]) {
        if (!((str[i] > 48 && str[i] < 57)))
            return (0);
        i = i + 1;
    }
    return (1);
}