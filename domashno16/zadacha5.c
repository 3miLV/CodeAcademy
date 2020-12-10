#include <stdio.h>

int main(){
    //int x = 34;
    int *p = NULL;
    int x = 34;
    p = &x;
    int *d = NULL;
    d = &x;
    printf("%d", p * d);
    return 0;
}
