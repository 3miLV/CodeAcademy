#include <stdio.h>

int main(){
    FILE *fp = NULL;
    long fpos;

    fp = fopen("test.txt", "r");
    if(fp!=NULL){
        fseek(fp, 4, SEEK_SET);
        fpos = ftell(fp);
    }
    fclose(fp);
    printf("%d\n", fpos);
    return 0;
}
