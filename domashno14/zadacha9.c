#include <stdio.h>
#include <string.h>

void our_strcat(char *s, char *t){
    while(*s){
        *s++;
    }
    while(*t){
        *s++ = *t++;
    }
    return;
}


int main(){
    char s[20] = "first";
    char t[] = "second";
    our_strcat(s, t);
    printf("%s", s);
    return 0;
}
