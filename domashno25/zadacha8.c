#include <stdio.h>

int main(){
    FILE *fp = NULL;

    fp = fopen("test.txt", "wt+");
    if(fp!=NULL){
        fputs("This is my first string.", fp);
        fputs("I am happy to do this", fp);
    }
    fclose(fp);
    return 0;
}
