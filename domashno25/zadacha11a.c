#include <stdio.h>
#include <stdlib.h>

int main(){
    int count = 0;
    char c;
    FILE *fp = NULL;
    if((fp = fopen("structs20.csv", "r"))== NULL){
        fprintf(stderr, "Неможе да се отвори файла%s\n", fp);
        exit(1);
    }else{
        while((c = fgetc(fp))!= EOF){
            if(c == '\n'){
                count++;
            }
        }
    }
    printf("%d\n", count);
    return 0;
}
