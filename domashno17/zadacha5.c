#include <stdio.h>
#include <stdlib.h>

int randomArr[5][5]= {0};
int size = sizeof(randomArr)/ sizeof(randomArr[0]);

void arrInput(){
    for(int i=0; i<size;i++){
        for(int j=0;j<size;j++){
            randomArr[i][j] = rand()% 10 + 1;
        }
    }
}

void arrPrint(){
    for(int i=0; i<size;i++){
        for(int j=0;j<size;j++){
            if(randomArr[i][j]>0 && randomArr[i][j]<6){
                printf("%d\t", randomArr[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    printf("%d\n", size);
    arrInput();
    arrPrint();
    return 0;
}
