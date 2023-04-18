#include <stdio.h>

typedef struct 
{
    int pos_x;
    int pos_y;
}Point;


Point *create_point(int px, int py)
{
    Point *p = (Point *)malloc(sizeof(Point));
    p->pos_x = px;
    p->pos_y = py;
    return p;
}

typedef struct line 
{
    Point *p1;
    Point *p2;
}Line;



void delete_point(Point * point)
{
    free(point);
}

void print_point(Point * p)
{
    printf("x = %d, y = %d \n", p->pos_x, p->pos_y);
}

int main()
{
    Point *p = create_point(10, 15  );
    print_point(p);
    delete_point(p);    
    return 0;
}



