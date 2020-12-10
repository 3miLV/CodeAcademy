#include <stdio.h>
#include <string.h>

void my_sort(char *s);

int isAnagram(char *s1, char *s2){
    int i;
    if(strlen(s1) != strlen(s2)){
        return 0;
    }
    my_sort(s1);
    my_sort(s2);
    for(i=0;i<strlen(s1);i++){
        if(s1[i] != s2[i]){
            return 0;
        }
    }
    return 1;
}


void my_sort(char *s){
    int i, j, temp =0;
    for (i = 0; i < strlen(s)-1; i++) {
        for (j = i+1; j < strlen(s); j++) {
            if (s[i] > s[j]) {
                temp  = s[i];
                s[i] = s[j];
                s[j] = temp;
            }
        }
    }
}



int main(){
    int rez;
    char s1[] = "obelisk";
    char s2[] = "bosilek";
    rez = isAnagram(s1, s2);
    printf("%d\n", rez);
}
