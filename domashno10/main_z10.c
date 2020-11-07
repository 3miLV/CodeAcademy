#include <stdio.h>
#include "zadacha10.h"

int main()
{
    int rez;
    int a = 8, b = 43;
    float n = -37.43;
    float rez1;
    rez = leastMultiple(a, b);
    printf("%d\n", rez);
    rez1 = my_abs(n);
    printf("%.2f\n", rez1);
    rez1 = my_sqrt(n);
    printf("%.2f\n", rez1);
    return 0;
}
