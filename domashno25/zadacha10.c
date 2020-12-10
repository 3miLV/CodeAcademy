#include <stdio.h>

int main(){
    FILE *fp = NULL;
    long fpos;

    fp = fopen("test.txt", "r");
    if(fp!=NULL){
        fpos = ftell(fp);
    }
    fclose(fp);
    printf("%d\n", fpos);
    return 0;
}
