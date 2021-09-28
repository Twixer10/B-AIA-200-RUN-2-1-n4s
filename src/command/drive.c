/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../../include/n4s.h"

void slow_down(void)
{
    forward(0.2);
    sleep(0.5);
    forward(0.1);
}

int forward(double value)
{
    char *str = NULL;
    fprintf(stderr, "%.1f", value);
    if (value < 0 || value > 1) {
        my_mprintf(2, "Error: invalid value in forward().\n");
        stop();
        exit(84);
    }
    asprintf(&str, "CAR_FORWARD:%.1f\n", value);
    put_str(str);
    fprintf(stderr, "MOVE:%.1f\n", value);
    free(str);
    get_value();
    return (0);
}

int backward(double value)
{
    char *str = NULL;
    if (value < 0 || value > 1) {
        stop();
        put_str("Error: invalid value in backward().\n");
        exit(84);
    }
    asprintf(&str, "CAR_BACKWARDS:%.1f\n", value);
    put_str(str);
    fprintf(stderr, "MOVE:%.1f\n", value);
    get_value();
    return (0);
}

int rotate(double value)
{
    char *str = NULL;
    if (value < -1 || value > 1) {
        stop();
        my_mprintf( 2,"Error: invalid value in rotate().\n");
        exit(84);
    }
    asprintf(&str, "WHEELS_DIR:%.1f\n", value);
    put_str(str);
    fprintf(stderr, "ANGLE:%.1f\n", value);
    get_value();
    return (0);
}