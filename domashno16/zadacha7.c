#include <stdio.h>

int main(){
    int n = 20;
    int *p = &n;
    *p += 5;
    printf("%d", n);
    return 0;
}
