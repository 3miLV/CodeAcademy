#include <stdio.h>

void my_fib(size_t *fib_arr, int fib_end){
    int i, n = 0, x = 1, temp=1;
    for(i=1;i <= fib_end;i++) {
        fib_arr[i] = temp;
        temp = n + x;
        n = x;
        x = temp;
    }
    return;
}

int main(){
    int fib_end = 40;
    size_t fib_arr[100] = {0};
    my_fib(fib_arr, fib_end);
    for(int i=0;i <= fib_end;i++) {
        printf("%lu\n", fib_arr[i]);
    }
    return 0;
}
