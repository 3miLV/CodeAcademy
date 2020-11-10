#include <stdio.h>

int digitSumR(int a)
{
    int temp=0;
    if(a > 1)
        temp += digitSumR(a-1);
    return temp + a;
}

int main()
{
  int a =  30;
  printf("%d\n", digitSumR(a));
  return 0;
}
