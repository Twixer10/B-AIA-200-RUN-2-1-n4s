/*
** EPITECH PROJECT, 2021
** lib/string
** File description:
** str
*/

#include "../../../include/my.h"

char *rev_str(char *str)
{
    int i = 0;
    int j = str_len(str) - 1;
    int rev = 0;

    while (i < j) {
        rev = str[i];
        str[i] = str[j];
        str[j] = rev;
        i = i + 1;
        j = j - 1;
    }
    return (str);
}

char *trim(char *str)
{
    char *tmpa;
    char *tmpb;

    if (str) {
        for (tmpa = tmpb = str; *tmpa;) {
            while (*tmpa && (*tmpa == ' '))
                tmpa++;
            if (*tmpa && (tmpb != str))
                *(tmpb++) = ' ';
            while (*tmpa && (*tmpa != ' '))
                *(tmpb++) = *(tmpa++);
        }
        *tmpb = '\0';
    }
    return (str);
}

char *clean_str(char *str)
{
    int i = 0;

    while (str[++i]) {
        if (str[i] == '\t' || str[i] == '\n')
            str[i] = ' ';
    }
    return (trim(str));
}

char *remove_chariot(const char *str)
{
    char *tmp = NULL;
    int i = 0;
    int count = 0;

    while (str[i] != '\0') {
        if (char_is_chariot(str[i], str[i+1]) == 1)
            count++;
        i++;
    }
    MALLOC(tmp, (sizeof(char) * ((str_len(str)-count) + 1)), NULL);
    i = 0;
    while (str[i] != '\0') {
        if (str[i] != '\n')
            tmp[i] = str[i];
        else
            tmp[i] = ',';
        i++;
    }
    tmp[i] = '\0';
    return (tmp);
}