/*
** EPITECH PROJECT, 2021
** lib/my_asprintf
** File description:
** my_asflush
*/

#include "../../../include/my.h"

void asflush(msasprintf_t *m)
{
    size_t size = 0;

    if (!(*m->str_ptr)) {
        *m->str_ptr = my_calloc(m->buffsize + 1, sizeof(char));
        mmemcpy((*m->str_ptr), m->buff, m->buffsize);
    }
    else {
        size = str_len(*m->str_ptr);
        *m->str_ptr = mrealloc(*m->str_ptr, size, size + m->buffsize + 1);
        mmemcpy(*m->str_ptr + size, m->buff, m->buffsize);
    }
    m->buffsize = 0;
}

/*void fill_buff_ptr(msasprintf_t *m)
{
    size_t size = 0;

    if (!(*m->str_ptr)) {
        *m->str_ptr = my_calloc(m->buffsize + 1, sizeof(char));
        mmemcpy((*m->str_ptr), m->buff, m->buffsize);
        return;
    }
    size = str_len(*m->str_ptr);
    *m->str_ptr = mrealloc(*m->str_ptr, size, size + m->buffsize + 1);
    mmemcpy(*m->str_ptr + size, m->buff, m->buffsize);
}*/