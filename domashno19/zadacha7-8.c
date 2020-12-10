#include <stdio.h>

struct point {
    int x;
    int y;
};
    

struct point makePoint(int x, int y){
    struct point a = {.x=x, .y=y};
    return a;
}

void makeRect(struct point *r){
    int x, y;
    struct point p;
    printf("vyvedete x\n");
    scanf("%d", &x);
    printf("vyvedete y\n");
    scanf("%d", &y);
    r->x=x;
    r->y=y;
}

int addPoint(struct point *r){
    int x, y, rez;
    struct point p;
    printf("vyvedete x\n");
    scanf("%d", &x);
    printf("vyvedete y\n");
    scanf("%d", &y);
    r->x=x;
    r->y=y;
    rez = r->x + r->y;
    return rez;
}

void printBoard(struct point *r){
    int i, j;
    for(i=0;i<15;i++){
        for(j=0;j<15;j++){
            if(i==r->x && j==r->y){
                printf("@");
            }
            else if(i==(r->x+4) && j==r->y){
                printf("@");
            }
            else{
                printf("-");
            }
        }
        printf("\n");
    }
}


/*
void twoTriangle(struct point *r){
    int x, y;
    struct point p;
    r->x=x;
    r->y=y;
}*/

int main(){
    struct point rect= {2, 4};
    //makeRect(&rect);
    //printf("%d\t%d\n",rect.x, rect.y);
    //int rez = addPoint(&rect);
    //printf("%d", rez);
    printBoard(&rect);
    return 0;
}
