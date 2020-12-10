#include <stdio.h>
#include <stdlib.h>

int main(void){
    int c, count=0, size=2;
    char* buffer;
    buffer = malloc(sizeof(char)*size);
    while ((c=getchar())!=EOF) {
        if(count == size -1){
            size = size * 2;
            buffer = realloc(buffer, size);
        }
        buffer[count++] = c;
    }
    buffer[count] = '\0';
    printf("%s\n", buffer);
    free(buffer);
    return EXIT_SUCCESS;
}


