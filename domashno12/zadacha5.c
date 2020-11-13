#include <stdio.h>

void printArr(int a[], int l){
int i;
for(i = 0; i < l; i++)
    printf("%d\t", a[i]);
}

int main()
{
    int i;
    int i_array[5];
    int size = sizeof(i_array) / sizeof(i_array[0]);
    for (i = 0; i < size; i++){
        scanf("%d", &i_array[i]);
    }
    printArr(i_array, size);
}
