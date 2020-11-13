#include <stdio.h>
#include <stdlib.h>

int xorshift_gen(int A)
{
    A ^= A << 13;
    A ^= A >> 17;
    A ^= A << 5;
    return A;
}

void print3dArr(int a[][5][5], int l){
    int i, j, k;
    for(i=0; i<l;i++){
        for(j=0;j<l;j++){
            if(j==l-1){
                printf("\n");
            }
            for(k=0;k<l;k++){
                printf("%d\t", a[i][j][k]);
                if(k==l-1){
                    printf("\n");
                }
            }
        }
    }
}

int main()
{
    int i,j, k, rez;
    int i_array[5][5][5];
    int a = 1;
    int size = sizeof(i_array) / sizeof(i_array[0]);
    for(i=0; i<size; i++){
        for(j=0;j<size;j++){
            for(k=0;k<size;k++){
                i_array[i][j][k] = xorshift_gen(i+j+k);
            }
        }
    }
    print3dArr(i_array, size);
}
