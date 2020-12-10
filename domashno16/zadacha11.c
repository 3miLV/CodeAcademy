#include <stdio.h>

int main(){
    int a=5, b=10, *p=NULL, *pp=NULL;
    p = &a;
    pp = &b;
    printf("%d", (*p) * (*pp));
    return 0;
}
