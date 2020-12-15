#include <stdio.h>
#include <stdlib.h>

int main(){
    FILE *fp = NULL;
    int i, fpos;
    char c,*buffer;

    fp = fopen("test.txt", "r");
    if(fp!=NULL){
        fseek(fp, 0, SEEK_END);
        fpos = ftell(fp);
        //buffer = malloc((fpos+1) * sizeof(char));
        for(i=0;i<fpos;i++){
            fseek(fp, fpos-1-i, SEEK_SET);
            //buffer[i] = fgetc(fp);
            printf("%c", fgetc(fp));
        }
    }
    //buffer[fpos] = 0;
    fclose(fp);
    //printf("%s\n", buffer);
    return 0;
}
