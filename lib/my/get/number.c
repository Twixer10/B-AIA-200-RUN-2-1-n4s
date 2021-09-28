/*
** EPITECH PROJECT, 2021
** lib/get
** File description:
** number
*/

#include "../../../include/my.h"

int get_nbr_char(char str)
{
    if (str < '0' && str > '9' )
            return (0);
    else
        return (str - 48);
}

int get_nbr(char const *str)
{
    int i = 0;
    int nbr = 0;

    if (str[0] == '-' || str[0] == '\0')
        i = i + 1;

    while (str[i] != '\0') {
        if (str[i] < '0' && str[i] > '9')
            return (0);
        nbr = nbr * 10 + get_nbr_char(str[i]);
        i = i + 1;
    }
    if (str[0] == '-')
        return (nbr * -1);
    else
        return (nbr);
}

char *get_only_nbr(char *str)
{
    int i = 0;
    int j = 0;
    char *news = MALLOC(news, (sizeof(char) * (str_len(str) + 1)), NULL);

    while (str[i] != '\0') {
        if ((str[i] >= '0' && str[i] <= '9' )) {
            news[j] = str[i];
            j = j + 1;
        }
        i = i + 1;
    }
    return (news);
}

int get_nbr_from_ptn(char **s)
{
    int	rtn = 0;

    while (**s >= 48 && **s <= 57) {
        rtn = rtn * 10;
        rtn = rtn + (**s - '0');
        (*s)++;
    }
    return (rtn);
}

double get_double(char *s)
{
    int i = 0;
    int tmp = 0;
    double res = 0.0;
    double flotting = 0;

    (s[0] == '-' ? i++ : 0);
    while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0') {
        tmp = s[i++] - '0';
        res = res * 10.0 + tmp;
    }
    (s[i] == '.' ? i++ : 0);
    while (s[i] >= '0' && s[i] <= '9' && s[i] != '\0') {
        tmp = s[i++] - '0';
        res = res * 10.0 + tmp;
        flotting *= 10.0;
    }
    res = (s[0] == '-' ? (res * (-1.0) / flotting) : (res * flotting));
    return (res);
}
