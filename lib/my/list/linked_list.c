/*
** EPITECH PROJECT, 2021
** lib/get
** File description:
** array
*/

#include "../../../include/my.h"

void put_list(ll_t *list, int type)
{
    ll_t *tmp = list;

    while (tmp != NULL) {
        if (type == STR)
            my_printf("%s\n", tmp->data);
        if (type == NBR)
            my_printf("%d\n", tmp->data);
        tmp = tmp->next;
    }
}

int insert_elem_list(ll_t **list, int elem)
{
    ll_t *store = NULL;

    if ((store = malloc(sizeof(*store) * 20)) == NULL)
        return (1);
    store->data = elem;
    store->next = *list;
    *list = store;
    return (0);
}

int get_elem_list(ll_t **list)
{
    ll_t *elem = *list;
    int value = 0;

    if (*list == NULL)
        return (value);
    if (list != NULL && *list != NULL) {
        value = elem->data;
        *list = elem->next;
        free(elem);
    }
    return (value);
}