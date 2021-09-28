/*
** EPITECH PROJECT, 2021
** lib/my_asprintf
** File description:
** my_putchar
*/

#include "../../../include/my.h"

void asputchar(msasprintf_t *m, char const c)
{
    if (m->buffsize == BUFFER_SIZE)
        asflush(m);
    m->buff[m->buffsize++] = c;
}

void asputstr(msasprintf_t *m, char *str)
{
    int i = 0;

    while (str[i])
        asputchar(m, str[i++]);
}

void asputnbr(msasprintf_t *m, int nb)
{
    int div = 1;

    if (nb < 0) {
        asputchar(m, '-');
        nb *= -1;
    }
    while ((nb / div) >= 10)
        div *= 10;
    while (div > 0) {
        asputchar(m, (nb / div) % 10 + '0');
        div /= 10;
    }
}