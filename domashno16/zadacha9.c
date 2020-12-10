#include <stdio.h>

int main(){
    int a = 20;
    int *p = &a;
   // int *pp = p;
    //*pp = 15;
    int **pp = &p;
    **pp = 15;
    printf("%p %p", p, pp);
}
