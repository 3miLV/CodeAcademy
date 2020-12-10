#include <stdio.h>

#define MY_PRINT(...) printf("TRACE:" __VA_ARGS__)

int main(){
    MY_PRINT("My favorite numbers are : %d, %d, %d\n", 3, 7, 21);
    return 0;
}