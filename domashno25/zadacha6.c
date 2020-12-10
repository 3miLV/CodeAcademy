#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]){
    int buf_size = 255;
    char buffer[buf_size];
    FILE* fp = NULL;
    if((fp = fopen("structs20.csv", "r")) == NULL){
        printf("Error! opening file");
        return -1;
    }
    while(fscanf(fp, "%[^\n]\n", buffer) != EOF){
        printf("%s\n", buffer);
    }
    fclose(fp);
    return 0;
}
