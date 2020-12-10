#include <stdio.h>

#define MY_CONCAT(x, y) x##y

int main(){
    MY_CONCAT(print,f)("\nThis is test");
    return 0;
}