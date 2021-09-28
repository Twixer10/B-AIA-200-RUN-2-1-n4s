/*
** EPITECH PROJECT, 2021
** lib
** File description:
** exit_msg
*/

#include "../../../include/my.h"

void exit_msg(int value, char *msg)
{
    put_sterr(msg);
    exit(value);
}
