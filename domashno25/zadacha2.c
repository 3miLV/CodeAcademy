#include <stdio.h>
#include <string.h>

int rename(const char *oldname, const char *newname);

int main(){
    FILE *fp = NULL;
    
    fp = fopen("test.txt", "wb");
    if(NULL != fp){
        fwrite("test message", 1, strlen("test message"), fp);
        if(rename("test.txt", "test_copy.txt"))
            printf("Failed to rename file");
        else
            printf("File renamed successfuly");
        remove("text.txt");
        fclose(fp);
    }

    return 0;
}