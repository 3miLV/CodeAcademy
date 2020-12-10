#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

char randSmCh();
char randSpCh();
char randUpCh();
char randNumCh();

void shuffleArray(char *s, char n){
    int i, j;
    char temp;
    for(i=0; i < n;i++){
        j = rand() % n;
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}

void genPass(char *s, char i, char j, char k, char l, char n){
    char (*randP[4])() = {randSmCh, randSpCh, randUpCh, randNumCh};
    for(;i>0;i--){
        *s = randP[0]();
        s++;
    }
    for(;j>0;j--){
        *s = randP[1]();
        s++;
    }
    for(;k>0;k--){
        *s = randP[2]();
        s++;
    }
    for(;l>0;l--){
        *s = randP[3]();
        s++;
    }
}

char randSmCh(){
    char lower = 'a', upper = 'z';
    char dif = (upper + 1) - lower;
    srand(rand()%time(NULL));
    return rand()% dif + lower;
}


char randSpCh(){
    char rez, i;
    char lower = '!', upper = '~';
    char dif = (upper + 1) - lower;
    srand(rand()%time(NULL));
    while(1){
        rez = rand()% dif + lower;
        if((rez >= '0' && rez <= '9') || (rez >= 'A' && rez <= 'Z') || (rez >= 'a' && rez <= 'z')){
            continue;
        }
        else
            return rez;
    }
}


char randUpCh(){
    char lower = 'A', upper = 'Z';
    char dif = (upper + 1) - lower;
    srand(rand()%time(NULL));
    return rand()% dif + lower;
}


char randNumCh(){
    char lower = '0', upper = '9';
    char dif = (upper + 1) - lower;
    srand(rand()%time(NULL));
    return rand()% dif + lower;
}


int main(){
    char s[10];
    genPass(s, 3, 2, 3, 2, 10);
    shuffleArray(s, 10);
    printf("%s\n", s);
}
