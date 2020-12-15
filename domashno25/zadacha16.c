#include <stdio.h>
#include <stdlib.h>

void remove_row(FILE *fp, int row){
    FILE *fp1 = NULL;
    char c;
    int count = 0;
    if((fp = fopen("test1.txt", "r"))== NULL || (fp1 = fopen("test_copy.txt", "w"))== NULL){
        fprintf(stderr, "Неможе да се отвори файла%s\n", fp);
        exit(1);
    }else{
        while((c = fgetc(fp))!= EOF){
            if(row == 1 && count == 0){
                count++;
                while((c = fgetc(fp))!= '\n')
                    continue;
                    if((c = fgetc(fp))!= '\n'){
                        continue;
                    }
            }
            else if(c == '\n'){
                count++;
                if(count == row-1){
                    while((c = fgetc(fp))!= '\n')
                    continue;
                }

            }
            fputc(c, fp1);
        }
    }
    fclose(fp);
    fclose(fp1);
    return;
}


int main(){
    int row = 1;
    char c;
    FILE *fp = NULL;
    remove_row(fp, row);
    return 0;
}
