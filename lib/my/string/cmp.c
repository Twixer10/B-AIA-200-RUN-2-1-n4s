/*
** EPITECH PROJECT, 2021
** lib/string/cmp
** File description:
** cmp
*/

#include "../../../include/my.h"

int str_cmp(char const *s1, char const *s2)
{
    int i = 0;

    if (str_len(s1) != str_len(s2))
        return (1);
    while (s1[i]) {
        if (s1[i] != s2[i]) {
            return (1);
        }
        i = i + 1;
    }
    return (0);
}

int str_ncmp(char const *s1, char const *s2, int n)
{
    int i = 0;

    while (s1[i] == s2[i] && s1[i] && s2[i] && i < n) {
        i = i + 1;
    }
    if ((s1[i] == '\0' && s2[i] == '\0') || i == n) {
        return (0);
    }
    else if (s1[i] > s2[i]) {
        return (1);
    }
    else {
        return (-1);
    }
}