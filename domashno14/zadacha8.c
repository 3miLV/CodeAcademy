#include <stdio.h>

int our_strcmp(char *s, char *t){
    while((*s++ && *t++) && *s == *t);
    if(*s == *t){
        return 0;
    }
    else{
        return *s - *t;
    }
}

int main(){
    int rez;
    char s[] = "qwerty";
    char t[] = "qwdrty";
    rez = our_strcmp(s, t);
    printf("%d\n", rez);
}

