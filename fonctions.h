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



Point *create_point(int x, int y);
void delete_point(Point * point);
void print_point(Point * p);

Line *create_line(Point *p1, Point *p2);
void delete_line(Line * line);
void print_line(Line * line);

