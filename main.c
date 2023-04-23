#include <stdio.h>
#include <stdlib.h>
#include "fonctions.h"


int main()
{

    //test shape
    Shape *f1 = create_line_shape (10, 15, 21, 25);
    print_shape (f1);
    delete_shape (f1);


    return 0;
}



