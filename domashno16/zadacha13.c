#include <stdio.h>

int main(){
    int i=0;
    char s[] = "string";
    char *p = s;
    while(*p++){
        i++;
    }
    printf("%d\n", i);
}
