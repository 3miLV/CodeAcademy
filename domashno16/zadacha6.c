#include <stdio.h>

int main(){
    int a=0;
    int *p = NULL;
    p = &a;
    *p = 5;
    int b = 6;
    p = &b;
    *p = 10;
    printf("%d\n %d\n", a, b);
}
