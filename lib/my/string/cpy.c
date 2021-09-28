/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** cpy
*/

#include "../../../include/my.h"

char *str_dup(char const *src)
{
    int i = 0;
    char *str = MALLOC(str, (sizeof(char) * (str_len(src) + 1)), NULL);

    while (src[i] != '\0') {
        str[i] = src[i];
        i = i + 1;
    }
    return (str);
}

char *str_cpy(char *dest, char const *src)
{
    int i = 0;

    while (src[i]) {
        dest[i] = src[i];
        i = i + 1;
    }
    dest[i] = '\0';
    return (dest);
}

char *str_ncpy(char *dest, char const *src, int n)
{
    int i = 0;

    while (src[i] && i < n) {
        dest[i] = src[i];
        i = i + 1;
    }
    if (!src[n - 1] == '\0')
        dest[i] = '\0';
    return (dest);
}