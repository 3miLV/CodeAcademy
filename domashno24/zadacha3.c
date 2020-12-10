#include <stdio.h>

void debugMsg(const char *msg){
#ifdef DEBUG
    #define DEBUGMSG(msg)\
    { printf("DEBUG: %s\n", (msg))}
#else
    #define DEBUGMSG(msg)
#endif
}

int main(){
    debugMsg("Message");
    return 0;
}