/*
** EPITECH PROJECT, 2021
** lib/my_asprintf
** File description:
** my_asprintf
*/

#include "../../../include/my.h"

int my_asprintf(char **str_ptr, const char *str, ...)
{
    char buffer[BUFFER_SIZE];
    va_list ap;

    my_memset(&buffer, 0, BUFFER_SIZE);
    msasprintf_t m = {1, 0, buffer, str_ptr};
    va_start(ap, str);
    get_asflags(&m, ap, str);
    va_end(ap);
    return (0);
}

void get_asflags(msasprintf_t *m, va_list ap, char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        if (str[i] == '%') {
            i++;
            asbasic_flag(m, ap, str[i]);
        } else
            asputchar(m, str[i]);
        i++;
    }
    asflush(m);
}

void asbasic_flag(msasprintf_t *m, va_list ap, char c)
{
    (c == 'd' ? asputnbr(m, va_arg(ap, int)) : 0);
    (c == 'c' ? asputchar(m, va_arg(ap, int)) : 0);
    (c == 's' ? asputstr(m, va_arg(ap, char *)) : 0);
}