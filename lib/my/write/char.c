/*
** EPITECH PROJECT, 2021
** lib/write
** File description:
** char
*/

#include "../../../include/my.h"

void put_char(char c)
{
    write(1, &c, 1);
}

void put_cher(char c)
{
    write(2, &c, 1);
}

void put_mchar(char c, int fd)
{
    write(fd, &c, 1);
}