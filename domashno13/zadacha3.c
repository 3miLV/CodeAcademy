#include <stdio.h>

int main()
{
    int c[10] = {100,90,80,70,60,50,40,30,20,10};
    int *p;
    p = c;
    //p = &c[0];
    printf("%d\n", *p);
    return 0;
}
