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
    for(i=0; i < n-1;i++){
        j = rand() % n;
        temp = s[j];
        s[j] = s[i];
        s[i] = temp;
    }
}

char genPass(char i, char j, char k, char l, char n){
    char str[n];
    printf("%d\n", n);
    char (*randP[4])() = {randSmCh, randSpCh, randUpCh, randNumCh};
    str[n--] = 'a';
    printf("%c\n", str[n]);
    for(;i>0;i--){
        str[n--] = randP[0]();
        printf("%c\n", str[n]);
    }
    for(;j>0;j--){
        str[n--] = randP[1]();
    }
    for(;k>0;k--){
        str[n--] = randP[2]();
    }
    for(;l>0;l--){
        str[n--] = randP[3]();
    }
    //*s = '\0';
    return *str;
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
    char rez;
    //char s[10];
    rez = genPass(3, 2, 3, 2, 10);
    printf("%s\n", rez);
    //shuffleArray(s, 10);
    //printf("%s\n", s);
}
