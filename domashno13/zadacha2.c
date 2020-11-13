#include <stdio.h>

void my_swap(int *a, int *b)
{
    *a = *a + *b;
    *b = *a - *b;
    *a = *a - *b;
    printf("%d %d\n", *a, *b);
}

int main()
{
    int a = 5;
    int b = 1;
    my_swap(&a, &b);
    return 0;
}
