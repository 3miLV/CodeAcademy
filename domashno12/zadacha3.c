#include <stdio.h>

int linSearch(int a[], int l, int d)
{
    int i;
    for(i=0; i<l; i++)
    {
        if(a[i] == d)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1,2,5,8,9};
    int l = sizeof(a) / sizeof(a[0]);
    int d = 8;
    int rez;
    rez = linSearch(a, l, d);
    printf("%d\n", rez);
    printf("%d\n", a[rez]);
}
