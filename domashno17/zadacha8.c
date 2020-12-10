#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void genPass(char *s){
    int i;
    char lower = '!', upper = '~';
    char dif = (upper+1) - lower;
    srand(time(NULL));
    for(i=0;i<6;i++){
        *s++ = rand()% dif + lower;
    }
    *s = '\0';
    return;
}

void recodePass(char *s){
    while(*s++){
        if(*s < 63)
            *s = *s << 1;
        else if(*s > 66)
            *s = *s >> 1;
        else
            *s = *s;
    }
    return;
}

int main(){
    char s[7];
    genPass(s);
    printf("%s\n", s);
    recodePass(s);
    printf("%s\n", s);
    return 0;
}
