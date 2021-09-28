/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../../include/n4s.h"

int start(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("START_SIMULATION\n");
    api = parse_value();
    if (str_cmp(api.err, "1") == 0) {
        my_mprintf(2, "STARTED\n");
        free_v_t(&api);
        return (0);
    }
    my_mprintf(2, "START ERROR\n");
    free_v_t(&api);
    return (1);
}

int stop(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("STOP_SIMULATION\n");
    api = parse_value();
    if (str_cmp(api.err, "10") == 0) {
        my_mprintf(2, "END\n");
        free_v_t(&api);
        return (0);
    }
    my_mprintf(2, "END ERROR\n");
    free_v_t(&api);
    return (1);
}