#include <stdio.h>




int isPrime(int x){
    if(x <= 1){
        //printf("Въведеното числото не е просто!\n");
        return 0;
    }
    else if((x % 2 != 0) && (x % 3 != 0) || x == 2){
        //printf("Въведеното число е просто!\n");
        return 1;
    }
    else{
        return 0;
    }
}

void fillIsPrime(int x, int *isPrimeArr){
    int i;
    for(i=2;i<=x;i++){
        if(isPrime(i)){
            //printf("%d", i);
            *isPrimeArr = i;
            isPrimeArr++;
        }
    }
    *isPrimeArr = '\0';
}

int main(){
    int i=0, x = 1000;
    int isPrimeArr[1000];
    //isPrime(x);
    fillIsPrime(x, isPrimeArr);
    while(isPrimeArr[i] != '\0'){
        printf("%d\t", isPrimeArr[i]);
        i++;
    }

    return 0;
}
