typedef struct 
{
    int pos_x;
    int pos_y;
}Point;

typedef struct line 
{
    Point *p1;
    Point *p2;
}Line;

typedef struct square
{
    Point *p1;
    Point *p2;
    Point *p3;
    Point *p4;
}Square;

typedef struct rectangle
{
    Point *p1;
    Point *p2;
    Point *p3;
    Point *p4;
}Rectangle;

typedef struct circle
{
    Point *p1;
    int radius;
}Circle;


typedef struct polygon {
    int n;
    Point **points; //tableau dynamique de Point*
}Polygon;


Point *create_point(int x, int y);
void delete_point(Point * point);
void print_point(Point * p);

Line *create_line(Point *p1, Point *p2);
void delete_line(Line * line);
void print_line(Line * line);

Square *create_square(Point *p1, int length);
void delete_square(Square * square);
void print_square(Square * square);

Rectangle *create_rectangle(Point *p1, int length, int width);
void delete_rectangle(Rectangle * rectangle);
void print_rectangle(Rectangle * rectangle);

Circle *create_circle(Point *p1, int radius);
void delete_circle(Circle * circle);
void print_circle(Circle * circle);

Polygon *create_polygon(int n);
void delete_polygon(Polygon * polygon);
void print_polygon(Polygon * polygon);
