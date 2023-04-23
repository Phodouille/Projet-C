#include "id.h"

unsigned int get_next_id() {
    return ++global_id;
}

unsigned int global_id = 0;