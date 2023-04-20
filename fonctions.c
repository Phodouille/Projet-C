#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


//////////////////////////////////////////
// Point

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


//////////////////////////////////////////
// Line

Line *create_line(Point *p1, Point *p2)
{
    Line *l = (Line *)malloc(sizeof(Line));
    l->p1 = p1; 
    l->p2 = p2;
    return l;
}

void delete_line(Line * line)
{
    free(line);
    line = NULL;
}

void print_line(Line * line)
{
    printf("x1 = %d, y1 = %d, x2 = %d, y2 = %d \n", line->p1->pos_x, line->p1->pos_y, line->p2->pos_x, line->p2->pos_y);
}







