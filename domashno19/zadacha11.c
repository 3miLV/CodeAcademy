#include <stdio.h>

struct point{
    int x;
    int y;
};

struct rect{
    struct point *a;
    struct point *b;
    struct rect *r;
};

int main(){
    struct rect *rect1;
    struct rect *rect2;
    rect1->a->x=4;
    rect1->b->y=5;
    rect2->a->x=3;
    rect2->b->y=6;
    rect1->r=rect2->r;
    printf("%d", rect1->r->a->x);
    return 0;
}
