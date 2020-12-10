#include <stdio.h>
#include <stdlib.h>

void fill3dArr(int m, int (*a)[m][m])
{
    int i, j, k, rez;
    for(i=0; i<m; i++){
        for(j=0;j<m;j++){
            for(k=0;k<m;k++){
                a[i][j][k] = rand();
            }
        }
    }
    return;
}


void print3dArr(int m, int (*a)[m][m]){
    int i, j, k;
    for(i=0; i<m;i++){
        for(j=0;j<m;j++){
            if(j==m-1){
                printf("\n");
            }
            for(k=0;k<m;k++){
                printf("%d\t", a[i][j][k]);
                if(k==m-1){
                    printf("\n");
                }
            }
        }
    }
}


int main(){
    int i,j, k, rez;
    int i_array[5][5][5] = {0};
    int size = 5;
    fill3dArr(size, i_array);
    print3dArr(size, i_array);
}

