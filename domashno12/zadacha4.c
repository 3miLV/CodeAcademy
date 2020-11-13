#include <stdio.h>


int binarySearch(int a[], int n, int x)
{
    int first = 0, last = n;
    int mid;
    while(first <= last)
    {
        mid = (first + last) / 2;
        if(x == a[mid])
        {
            return mid;
        }
        else if(x > a[mid])
        {
            first = mid + 1;
        }
        else if(x < a[mid])
        {
            last = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int a[] = {1,2,5,8,9};
    int n = sizeof(a) / sizeof(a[0]);
    int x = 2;
    int rez;
    rez = binarySearch(a, n, x);
    printf("%d\n", rez);
}
