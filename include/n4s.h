/*
** EPITECH PROJECT, 2021
** include
** File description:
** n4s
*/

#ifndef N4S_H_
#define N4S_H_

#include "my.h"
#include <math.h>

enum type_e {SIMULATION, CMD, TIMER};
enum dir_e {LEFT, MID, RIGHT};

typedef struct need4stek_s
{
    double *average;
    double *values;
} n4s_t;

typedef struct values_s
{
    char *err;
    char *value;
    char *info;
} v_t;

typedef struct n4s_manager_s
{
    n4s_t lidar;
    v_t info;
    double speed;
    double max_speed;
    double min_speed;
    double rotation;
} manage_n4s_t;

int start(void);
int stop(void);
int forward(double value);
int backward(double value);
int rotate(double value);
double speed_min(void);
double speed_max(void);
double get_speed(void);
double get_angle(void);
double get_time(void);
double average(int x, int start, int total, manage_n4s_t *g);
void fill_arr(char **tmp, manage_n4s_t *g);
void get_lidar(manage_n4s_t *g);
char *get_value(void);
v_t parse_value(void);
double to_double(char *line);
void init_struct(manage_n4s_t *g);
void free_v_t(v_t *g);
void slow_down(void);

#endif /* !N4S_H_ */