#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>

void handleSignal(){
    char c;
    printf("Наистина ли желаете да прекъснате програмата? [y/n]\n");
    c = getchar();
    if(c == 'y')
        exit(1);
}

int main(){
    signal(SIGINT, handleSignal);
    for(;;){
        sleep(1);
    }
    return 0;
}
