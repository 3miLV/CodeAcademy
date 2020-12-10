#include <stdio.h>

int main(){
    FILE *fp = NULL;
    fpos_t fpos;

    fp = fopen("test.txt", "r");
    fgetpos(fp, &fpos);
    fclose(fp);
    printf("%d\n", fpos);
    return 0;
}
