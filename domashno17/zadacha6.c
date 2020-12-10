#include <stdio.h>

int countVhar(char *c){
    int count_a=0;
    while(*c++){
        if(*c == 'a'){
            count_a += 1;
        }
    }
    return count_a;
}

int main(){
    char s[] = "This is a string to test my idea for search in a char and";
    int rez;
    rez = countVhar(s);
    printf("%d\n", rez);
    return 0;
}
