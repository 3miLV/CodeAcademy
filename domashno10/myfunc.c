#include <stdio.h>
#include "global.h"

int add(int a, int b)
{
    return a + b;
}

int incr(int c)
{
    return ++c;
}

int evenOrNot()
{
   int x;
   printf("Въведете цяло число: ");
   scanf("%d", &x);
   if(x%2==0 && x != 0)
   {
       printf("числото %d e четно!\n", x);
   }
   else
   {
       printf("числото %d нe е четно!\n", x);
   }

   return 0;
}

void decToBin(unsigned n)
{
unsigned i;
for (i = 1 << 7; i > 0; i = i >> 1 )
    (n & i)? printf("1"): printf("0");
printf("\n");
}

float faceOfTriangle(float a, float b)
{
    return (a * b) / 2;
}

float faceOfRectangle(float faceOfTriangle)
{
    return faceOfTriangle + faceOfTriangle;
}

float returnABC(int a, int b, int c)
{
    return a * 2 + b * c;
}

float returnAB4(int a, int b)
{
    return (a + b) * 4;
}

double circleArea(double r)
{
    return g_pi * r * r;
}

double area()
{
    double r;
    printf("Enter a radius\n");
    scanf("%lf", &r);
    return circleArea(r);
}
