#include <stdio.h>
#include <string.h>

int my_strend(char *s, char *t){
    int i = strlen(s)-1;
    int j = strlen(t)-1;
    if(i < j){
        return 0;
    }
    while(j>=0){
        if(t[j] != s[i]){
            return 0;
        }
        i--;
        j--;
    }
    return 1;
}

int main(){
    char s[] = "qwerty";
    char t[] = "rty";
    int rez = my_strend(s, t);
    printf("%d", rez);
    return 0;
}
