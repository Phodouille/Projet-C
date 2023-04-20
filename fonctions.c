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

//////////////////////////////////////////
// Square

Square *create_square(Point *p1, int length)
{
    Square *s = (Square *)malloc(sizeof(Square));
    s->p1 = p1;
    s->p2 = create_point(p1->pos_x + length, p1->pos_y);
    s->p3 = create_point(p1->pos_x + length, p1->pos_y + length);
    s->p4 = create_point(p1->pos_x, p1->pos_y + length);
    return s;
}

void delete_square(Square * square)
{
    free(square);
    square = NULL;
}

void print_square(Square * square)
{
    printf("x1 = %d, y1 = %d, x2 = %d, y2 = %d, x3 = %d, y3 = %d, x4 = %d, y4 = %d \n", square->p1->pos_x, square->p1->pos_y, square->p2->pos_x, square->p2->pos_y, square->p3->pos_x, square->p3->pos_y, square->p4->pos_x, square->p4->pos_y);
}

//////////////////////////////////////////
// rectangle

Rectangle *create_rectangle(Point *p1, int length, int width)
{
    Rectangle *r = (Rectangle *)malloc(sizeof(Rectangle));
    r->p1 = p1;
    r->p2 = create_point(p1->pos_x + length, p1->pos_y);
    r->p3 = create_point(p1->pos_x + length, p1->pos_y + width);
    r->p4 = create_point(p1->pos_x, p1->pos_y + width);
    return r;
}

void delete_rectangle(Rectangle * rectangle)
{
    free(rectangle);
    rectangle = NULL;
}

void print_rectangle(Rectangle * rectangle)
{
    printf("x1 = %d, y1 = %d, x2 = %d, y2 = %d, x3 = %d, y3 = %d, x4 = %d, y4 = %d \n", rectangle->p1->pos_x, rectangle->p1->pos_y, rectangle->p2->pos_x, rectangle->p2->pos_y, rectangle->p3->pos_x, rectangle->p3->pos_y, rectangle->p4->pos_x, rectangle->p4->pos_y);
}


//////////////////////////////////////////
// circle

Circle *create_circle(Point *p1, int radius)
{
    Circle *c = (Circle *)malloc(sizeof(Circle));
    c->p1 = p1;
    c->radius = radius;
    return c;
}

void delete_circle(Circle * circle)
{
    free(circle);
    circle = NULL;
}

void print_circle(Circle * circle)
{
    printf("x = %d, y = %d, radius = %d \n", circle->p1->pos_x, circle->p1->pos_y, circle->radius);
}


//////////////////////////////////////////
// polygon

Polygon *create_polygon(int n)
{
    Polygon *p = (Polygon *)malloc(sizeof(Polygon));
    p->n = n;
    p->points = (Point **)malloc(n * sizeof(Point *));
    return p;
}

void delete_polygon(Polygon * polygon)
{
    free(polygon);
    polygon = NULL;
}

void print_polygon(Polygon * polygon)
{
    printf("n = %d \n", polygon->n);
    for (int i = 0; i < polygon->n; i++)
    {
        printf("x = %d, y = %d \n", polygon->points[i]->pos_x, polygon->points[i]->pos_y);
    }
}






