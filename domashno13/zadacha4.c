#include <stdio.h>

int main()
{
    int i;
    int c[10] = {100,90,80,70,60,50,40,30,20,10};
    int size = sizeof(c) / sizeof(c[0]);
    int *p;
    p = c;
    p[2] = 5;
    p[3] = 33;
    p[4] -= 7;
    p[6] += 10;
    p[9] *= 3;
    /*
    p = &c[2], *p = 5;
    p = &c[3], *p = 33;
    p = &c[4], *p -= 7;
    p = &c[6], *p += 10;
    p = &c[9], *p *= 3;
    */

    for(i=0;i<size;i++)
    {
        printf("%d\n", c[i]);
    }
    return 0;
}
