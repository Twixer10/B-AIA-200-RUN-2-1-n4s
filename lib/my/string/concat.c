/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** concat
*/

#include "../../../include/my.h"

char *str_concat(char *dest , char  const *src)
{
    int i = 0;
    int j = str_len(dest);

    while (src[i]) {
        dest[j + i] = src[i];
        i = i + 1;
    }
    return (dest);
}

char *str_nconcat(char *dest , char  const *src , int nb)
{
    int i = 0;
    int j = str_len(dest);

    while (src[i] && i < nb) {
        dest[j + i] = src[i];
        i = i + 1;
    }
    return (dest);
}