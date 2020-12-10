#include <stdio.h>
#include <string.h>

char *fgets(char *str, int nchars, FILE *stream);


int main(){
    int c;
    char s[32];
    FILE *fp = NULL;

    fp = fopen("test1.txt", "rt");
    if(NULL != fp){
        if(fgets(s, 6, fp) != NULL){
            printf("%s", s);
        }
        printf("\n");
        fclose(fp);

    }else{
        printf("greshka");
        return -1;
    }
    return 0;
}