#include <stdio.h>

void debugMsg(const char *pszMsg){
    #ifdef DEBUG
        printf("DEBUG: %s\n", pszMsg);
    #endif
}

int main(){
    debugMsg("Message");
    return 0;
}