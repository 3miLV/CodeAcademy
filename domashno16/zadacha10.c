#include <stdio.h>

int main(){
    int a = 20;;
    int *p= NULL;
    printf("%p\n", &a);
    p = &a;
    printf("%p\n", p);
    printf("%d\n", a);
    printf("%d\n", *p);
}
