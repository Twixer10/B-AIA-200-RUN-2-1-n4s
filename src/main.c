/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../include/n4s.h"

void manage_speed(manage_n4s_t *g)
{
    if (g->lidar.average[MID] >= 1700)
        forward(1);
    else if (g->lidar.average[MID] >= 1500)
        forward(0.8);
    else if (g->lidar.average[MID] >= 800)
        forward(0.5);
    else if (g->lidar.average[MID] >= 600)
        forward(0.4);
    else if (g->lidar.average[MID] >= 350)
        forward(0.2);
    else
        forward(0.1);
}

void manage_dir(manage_n4s_t *g) {
    double value = g->lidar.average[LEFT] - g->lidar.average[RIGHT];

    manage_speed(g);
    if (g->lidar.average[MID] >= 1450)
        rotate((value >= 0 ? 0.005 : -0.005));
    else if (g->lidar.average[MID] >= 974)
        rotate((value >= 0 ? 0.05 : -0.05));
    else if (g->lidar.average[MID] >= 550)
        rotate((value >= 0 ? 0.1 : -0.1));
    else if (g->lidar.average[MID] >= 400)
        rotate((value >= 0 ? 0.2 : -0.2));
    else if (g->lidar.average[MID] >= 200)
        rotate((value >= 0 ? 0.3 : -0.3));
    else
        rotate((value >= 0 ? 0.5 : -0.5));
}

void my_ai(manage_n4s_t *g)
{
    start();
    while (1) {
        get_lidar(g);
        manage_dir(g);
    }
}

int main(void)
{
    manage_n4s_t g;

    init_struct(&g);
    my_ai(&g);
    return (0);
}