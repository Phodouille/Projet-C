#include <stdio.h>
#include "fonctions.h"


int main()
{
    Point *p = create_point(10, 15  );
    print_point(p);
    delete_point(p);    
    return 0;
}



