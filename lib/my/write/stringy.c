/*
** EPITECH PROJECT, 2021
** lib/write
** File description:
** string
*/

#include "../../../include/my.h"

int put_str(char const *str)
{
    int i = 0;

    while (str[i])
        put_char(str[i++]);
    return (0);
}

int put_sterr(char *str)
{
    int i = 0;

    while (str[i] != '\0')
        put_cher(str[i++]);
    return (84);
}

int put_mstr(char const *str, int fd)
{
    int i = 0;

    while (str[i])
        put_mchar(str[i++], fd);
    return (0);
}