#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(void){
    int i, j;
    struct point a = {.x=10, .y=8};
    struct point *p = &a;
    struct point *pp = &a;
    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            if((i>p->x && j>p->y) && (i<pp->x+5 && j<pp->y+5)){
                printf("@");
            }
            else{
                printf("-");
            }
        p->x++;
        p->y--;
        }
        printf("\n");
    }
}
