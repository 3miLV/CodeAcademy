#include <stdio.h>
int meanArr(int a[], int l)
{
    int i;
    float rez=0.0;
    for(i=0;i<l;i++)
    {
        rez += a[i];
    }
    return rez / l;
}


int main()
{
    int a[] = {1,2,5,8,9};
    int l = sizeof(a) / sizeof(a[0]);
    int d = 8;
    float rez;
    rez = meanArr(a, l);
    printf("%f\n", rez);
}
