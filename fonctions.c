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
    printf("POINT %d %d \n", p->pos_x, p->pos_y);
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
    printf("LINE %d %d %d %d \n", line->p1->pos_x, line->p1->pos_y, line->p2->pos_x, line->p2->pos_y);
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
    printf("SQUARE %d %d %d %d %d %d %d %d \n", square->p1->pos_x, square->p1->pos_y, square->p2->pos_x, square->p2->pos_y, square->p3->pos_x, square->p3->pos_y, square->p4->pos_x, square->p4->pos_y);
}

//////////////////////////////////////////
// rectangle

Rectangle *create_rectangle(Point *p1, int width, int height)
{
    Rectangle *r = (Rectangle *)malloc(sizeof(Rectangle));
    r->p1 = p1;
    r->p2 = create_point(p1->pos_x + height, p1->pos_y);
    r->p3 = create_point(p1->pos_x + height, p1->pos_y + width);
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
    printf("RECTANGLE %d %d %d %d %d %d %d %d \n", rectangle->p1->pos_x, rectangle->p1->pos_y, rectangle->p2->pos_x, rectangle->p2->pos_y, rectangle->p3->pos_x, rectangle->p3->pos_y, rectangle->p4->pos_x, rectangle->p4->pos_y);
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
    printf("CIRCLE %d %d %d \n", circle->p1->pos_x, circle->p1->pos_y, circle->radius);
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
        printf("POINT %d %d \n", polygon->points[i]->pos_x, polygon->points[i]->pos_y);
    }
}


//////////////////////////////////////////
// shape


Shape *create_empty_shape(SHAPE_TYPE shape_type) 
{
    Shape *s = (Shape *)malloc(sizeof(Shape));
    s->ptrShape = NULL;
    s->id = 1;
    s->shape_type = shape_type;
    return s;
}

Shape *create_point_shape(int px, int py) 
{
    Shape *s = create_empty_shape(POINT);
    Point *p = create_point(px, py);
    s->ptrShape = p;
    return s;
}

Shape *create_line_shape(int px1, int py1, int px2, int py2) 
{
    Shape *s = create_empty_shape(LINE);
    Point *p1 = create_point(px1, py1);
    Point *p2 = create_point(px2, py2);
    Line *l = create_line(p1, p2);
    s->ptrShape = l;
    return s;
}

Shape *create_square_shape(int px, int py, int length) 
{
    Shape *s = create_empty_shape(SQUARE);
    Point *p1 = create_point(px, py);
    Square *sq = create_square(p1, length);
    s->ptrShape = sq;
    return s;
}

Shape *create_rectangle_shape(int px, int py, int width, int height) 
{
    Shape *s = create_empty_shape(RECTANGLE);
    Point *p1 = create_point(px, py);
    Rectangle *r = create_rectangle(p1, width, height);
    s->ptrShape = r;
    return s;
}

Shape *create_circle_shape(int px, int py, int radius) 
{
    Shape *s = create_empty_shape(CIRCLE);
    Point *p1 = create_point(px, py);
    Circle *c = create_circle(p1, radius);
    s->ptrShape = c;
    return s;
}

Shape *create_polygon_shape(int lst[], int n)
{
    Shape *s = create_empty_shape(POLYGON);
    Polygon *p = create_polygon(n);
    for (int i = 0; i < n; i++)
    {
        p->points[i] = create_point(lst[2 * i], lst[2 * i + 1]);
    }
    s->ptrShape = p;
    return s;
}   

void delete_shape(Shape * shape)
{
    free(shape);
    shape = NULL;
}

void print_shape(Shape * shape)
{
    switch (shape->shape_type)
    {
    case POINT:
        print_point((Point *)shape->ptrShape);
        break;
    case LINE:
        print_line((Line *)shape->ptrShape);
        break;
    case SQUARE:
        print_square((Square *)shape->ptrShape);
        break;
    case RECTANGLE:
        print_rectangle((Rectangle *)shape->ptrShape);
        break;
    case CIRCLE:
        print_circle((Circle *)shape->ptrShape);
        break;
    case POLYGON:
        print_polygon((Polygon *)shape->ptrShape);
        break;
    default:
        break;
    }
}



