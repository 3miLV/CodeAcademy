#include <stdio.h>
#include <string.h>

int main(){
    int c;
    char s[5];
    FILE *fp = NULL;

    fp = fopen("test1.txt", "rt");
    if(NULL != fp){
        while((c = fgetc(fp)) != EOF){
            printf("%c", c);
        }
        printf("\n");
        fclose(fp);

    }else{
        printf("greshka");
        return -1;
    }
    return 0;
}