#include <stdio.h>
#include <stdlib.h>

int main(){
    char c;
    FILE *fp = NULL;
    FILE *fp1 = NULL;
    if((fp = fopen("test1.txt", "r"))== NULL || (fp1 = fopen("test2.txt", "w"))== NULL){
        fprintf(stderr, "Неможе да се отвори файла%s\n", fp);
        exit(1);
    }else{
        while((c = fgetc(fp))!= EOF){
            if(c>='a' && c<='z'){
                c = c + 'A' - 'a';
            }
            fputc(c, fp1);
        }
        remove("test1.txt");
        rename("test2.txt", "test1.txt");
    }
    fclose(fp1);
    return 0;
}
