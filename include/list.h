/*
** EPITECH PROJECT, 2021
** include/list
** File description:
** linked_list
*/

#ifndef LINKED_LIST_H_
#define LINKED_LIST_H_

typedef struct linked_list_s
{
    int data;
    struct linked_list_s *next;
} ll_t;

enum type
{
    STR = 0,
    NBR = 1,
    CHAR = 2
};

void put_list(ll_t *list, int type);
int insert_elem_list(ll_t **list, int elem);
int get_elem_list(ll_t **list);

#endif /* !LINKED_LIST_H_ */