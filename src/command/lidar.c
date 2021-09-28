/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../../include/n4s.h"

double average(int x, int start, int total, manage_n4s_t *g)
{
    int i = start;
    double res = 0.0;

    while (i != x) {
        res += g->lidar.values[i];
        i++;
    }
    res /= total;
    return (res);
}

void fill_arr(char **tmp, manage_n4s_t *g)
{
    int i = 3;
    int j = 0;

    while (i != 35) {
        g->lidar.values[j] = strtod(tmp[i], NULL);
        i++;
        j++;
    }
}

void get_lidar(manage_n4s_t *g)
{
    char *tmp = NULL;
    char **arr = NULL;

    put_str("GET_INFO_LIDAR\n");
    tmp = get_value();
    arr = my_split(tmp, ':');
    if (str_cmp("Track Cleared", arr[array_len(arr)-2]) == 0) {
        slow_down();
        forward(0);
        rotate(0);
        stop();
        exit(0);
    }
    fill_arr(arr, g);
    g->lidar.average[LEFT] = average(9, 0, 10, g);
    g->lidar.average[MID] = average(21, 10, 12, g);
    g->lidar.average[RIGHT] = average(31, 22, 10, g);
}

/*fprintf(stderr, "Left: %.1f Middle: %.1f Right: %.1f\n",
            g->lidar.average[LEFT], g->lidar.average[MID],
            g->lidar.average[RIGHT]);*/