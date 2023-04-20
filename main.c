#include <stdio.h>
#include "fonctions.h"


int main()
{

    //test polygon
    Polygon *p = create_polygon(4);
    p->points[0] = create_point(1, 1);
    p->points[1] = create_point(2, 2);
    p->points[2] = create_point(3, 3);
    p->points[3] = create_point(4, 4);
    print_polygon(p);
    delete_polygon(p);
    return 0;
}



