#include <stdio.h>

int leastMultiple(int a, int b)
{
    int n, nok;
    if(a > b)
    {
        n = a;
    }
    else
    {
        n = b;
    }
    while(1)
    {
        if(n % a == 0 && n % b == 0)
        {
            nok = n;
            break;
        }
        n++;
    }
    return nok;
}

float my_abs(float n)
{
    if(n < 0)
    {
        return -n;
    }
    else
    {
        return n;
    }
}

double my_sqrt(double n)
{
    if(n < 0)
    {
        n = my_abs(n);
    }
    float sqrt_n, temp;
    sqrt_n = n / 2;
    temp = 0;
    while(sqrt_n != temp)
    {
        temp = sqrt_n;
        sqrt_n = (n / temp + temp) / 2;
    }
    return sqrt_n;
}
