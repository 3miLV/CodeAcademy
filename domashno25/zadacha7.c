#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    FILE *fp = NULL;
    int ch;
    fp = fopen("test.txt", "wt+");
    for(ch=43; ch<=100; ch++){
        fputc(ch, fp);
    }
    fclose(fp);
    return 0;
}
