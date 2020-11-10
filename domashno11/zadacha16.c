#include <stdio.h>

/*
int main()
{
    int a = 1, b = 3, temp;
    temp = a;
    while (a < b)
    {
        a++;
        temp += a;
    }
    printf("%d", temp);
    return 0;
}*/


int digitSum(int a)
{
    int i, temp;
    for(i=1; i <= a; i++)
        temp += i;
    return temp;
}

int main()
{
  int a =  30;
  printf("%d\n", digitSum(a));
  return 0;
}
