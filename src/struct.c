/*
** EPITECH PROJECT, 2021
** start_project
** File description:
** main
*/

#include "../include/n4s.h"

void init_struct(manage_n4s_t *g)
{
    g->info.value = NULL;
    g->info.info = NULL;
    g->info.err = NULL;
    g->lidar.values = malloc(sizeof(double) * 32);
    g->lidar.average = malloc(sizeof(double) * 3);
}