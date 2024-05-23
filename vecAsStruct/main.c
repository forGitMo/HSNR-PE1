#include <stdio.h>
#include <math.h>
typedef struct { double x; double y; } vec2d_t;

double distance(vec2d_t *a, vec2d_t *b){
    double distance;
    double var = ((b->x - a->x) * (b->x - a->x)) + ((b->y - a->y) * (b->y - a->y));


    distance =  sqrt(var);

    return distance;
}


int main() {
    vec2d_t a = { 2.0, 3.0 };
    vec2d_t b = { 4.0, 6.0 };
    printf("%0.1lf",distance(&a, &b));
    return 0;
}
