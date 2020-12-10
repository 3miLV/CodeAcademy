#include <stdio.h>

int main(){
    int n = 20;
    int *p = &n;
    printf("%p\n", p);
    printf("%p", &n);
}
