#include <stdio.h>

int bigInArr(int *p, int l)
{
    int i;
    int temp=0;
    for(i=0;i<l;i++)
    {
        if(temp < p[i])
        {
            temp = p[i];
        }
    }
    return temp;
}

int main()
{
    int arr[] = {5,2,56,12,67,34,1,29,13,43};
    int size = sizeof(arr) / sizeof(arr[0]);
    int rez = bigInArr(arr, size);
    printf("%d\n", rez);
    return 0;
}
