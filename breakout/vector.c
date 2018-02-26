#include "vector.h"

void add_vector(Vector *v1, Vector *v2) {
    v1->x += v2->x;
    v1->y += v2->y;
}
