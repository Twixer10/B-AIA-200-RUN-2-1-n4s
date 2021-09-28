/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../../include/n4s.h"

char *get_value(void)
{
    int i;
    char *tmp = NULL;
    size_t t;

    i = getline(&tmp, &t, stdin);
    if (i == -1)
        exit(84);
    return (tmp);
}

v_t parse_value(void)
{
    v_t line = {NULL, NULL, NULL};
    char *str = get_value();
    char **arr = my_split(str, ':');

    line.err = arr[0];
    line.info = remove_chariot(arr[array_len(arr)-1]);
    line.value = arr[3];
    free(str);
    return (line);
}

void free_v_t(v_t *g)
{
    free(g->info);
    free(g->err);
    free(g->value);
    g->err = NULL;
    g->value = NULL;
    g->info = NULL;
}