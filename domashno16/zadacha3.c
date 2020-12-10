#include <stdio.h>

int main(){
    int a[] = {1,2,3};
    float b[] = {1.0,2.0,3.0};
    char c[] = "char";
    int *ip = a;
    float *fp = b;
    char *cp = c;
    printf("%d, %f, %c", *(ip+1), *(fp+2), *(cp+3));
}
