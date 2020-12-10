#include <stdio.h>
#include <stdlib.h>

int main(){
    int sum=0;
    int row, col;
    int x[10][10][10];
    int ***p = (int***)x;
    int size = sizeof(x)/sizeof(int);
    printf("%d\n", size);
    for(int i=0;i<size;i++){
        ***(p+i) = i;
        sum += ***(p+i);
        printf("%d", sum);
    }
    sum /= size;
    printf("%d", sum);
}
