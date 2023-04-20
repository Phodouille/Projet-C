#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"

Point *create_point(int px, int py)
{
    Point *p = (Point *)malloc(sizeof(Point));
    p->pos_x = px;
    p->pos_y = py;
    return p;
}


void delete_point(Point * point)
{
    free(point);
    point = NULL;
}

void print_point(Point * p)
{
    printf("x = %d, y = %d \n", p->pos_x, p->pos_y);
}
