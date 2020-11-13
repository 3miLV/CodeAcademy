#include <stdio.h>

void print2dArr(int a[][5], int l){
    int i, j;
    for(i = 0; i<l; i++){
        for(j=0;j<l;j++){
            printf("%d\t", a[i][j]);
            if(j==l-1){
                printf("\n");
            }
        }
    }
}

int main()
{
    int i,j;
    int i_array[5][5];
    int size = sizeof(i_array) / sizeof(i_array[0]);
    for (i = 0; i < size; i++){
        for(j=0; j < size; j++){
            printf("Enter value for i_array[%d][%d]:", i, j);
            scanf("%d", &i_array[i][j]);
        }
    }
    print2dArr(i_array, size);
}
