/*
** EPITECH PROJECT, 2021
** lib
** File description:
** check_help
*/

#include "../../../include/my.h"

void check_help(int ac, char **av, char *help, char *err)
{
    if (av[1] != NULL && str_cmp(av[1], "-h") == 0 && ac == 2)
        exit_msg(84, help);
    if (ac != 2)
        exit_msg(84, err);
}
