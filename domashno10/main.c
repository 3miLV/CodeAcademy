#include <stdio.h>
#include "myfunc.h"

int main()
{
    int rez;
    int n = 10;
    rez = evenOrNot();
    printf("%d\n", rez);
    decToBin(n);

    int a = 1, b = 2, c = 3;
    float rez1;
    rez = add(a, b);
    a = incr(a);
    printf("%d, %d\n", rez, a);
    double r = 4.111;
    rez = circleArea(r);
    printf("%d\n", rez);
    rez1 = faceOfTriangle(2.5, 3);
    printf("%f\n", rez1);
    rez1 = faceOfRectangle(faceOfTriangle(2.5, 3));
    printf("%f\n", rez1);
    rez1 = area();
    printf("%lf\n", rez1);
    rez1 = returnAB4(a, b);
    printf("%f\n", rez1);
    rez1 = returnABC(a, b, c);
    printf("%f\n", rez1);
    return 0;
}
