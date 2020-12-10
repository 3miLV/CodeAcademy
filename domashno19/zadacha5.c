#include <stdio.h>

struct point{
    int x;
    int y;
};

int main(void){
    int i, j;
    struct point a = {3, 2};
    struct point b = {.y=12, .x=7};
    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            if((i>a.x && j>a.y) && (i<b.x && j<b.y)){
                printf("@");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}
