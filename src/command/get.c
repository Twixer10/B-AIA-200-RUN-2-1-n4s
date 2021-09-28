/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../../include/n4s.h"

double speed_min(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("GET_CAR_SPEED_MIN\n");
    api = parse_value();
    fprintf(stderr, "%s|%s MIN_SPEED:%s\n", api.err, api.info, api.value);
    if (str_cmp(api.err, "1") == 0)
        return (strtod(api.value, NULL));
    return (1);
}

double speed_max(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("GET_CAR_SPEED_MAX\n");
    api = parse_value();
    fprintf(stderr, "%s|%s MAX_SPEED:%s\n", api.err, api.info, api.value);
    if (str_cmp(api.err, "1") == 0)
        return (strtod(api.value, NULL));
    return (1);
}

double get_speed(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("GET_CURRENT_SPEED\n");
    api = parse_value();
    my_mprintf(2, "%s|%s SPEED:%s\n", api.err, api.info, api.value);
    if (str_cmp(api.err, "1") == 0)
        return (strtod(api.value, NULL));
    return (1);
}

double get_angle(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("GET_CURRENT_WHEELS\n");
    api = parse_value();
    my_mprintf(2, "%s|%s ANGLE:%s\n", api.err, api.info, api.value);
    if (str_cmp(api.err, "1") == 0) {
        return (strtod(api.value, NULL));
    }
    return (1);
}

double get_time(void)
{
    v_t api = {NULL, NULL, NULL};

    put_str("GET_INFO_SIMTIME\n");
    api = parse_value();
    my_mprintf(2, "%s | %s | %s\n", api.err, api.value, api.info);
    if (str_cmp(api.err, "1") == 0) {
        free_v_t(&api);
        return (3);
    }
    return (1);
}