#include <stdio.h>

int main(){
    FILE *fp = NULL;
    char c;
    int count = 0;

    fp = fopen("test.txt", "wt+");
    if(fp!=NULL){
        fprintf(fp, "%s %d %c\n", "qwerty", 123, 'd');
    }
    fclose(fp);
    fp = fopen("test.txt", "r");
    while((c = fgetc(fp))!= EOF){
        count++;
    }
    fclose(fp);
    printf("%d\n", count);
    return 0;
}
