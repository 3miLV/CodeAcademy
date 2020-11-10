#include <stdio.h>
#include <string.h>

double atof(char s[])
{
  int i, j;
  int n=0;
  double p=1;
  for(i = 0; s[i] >= '0' && s[i] <= '9'; i++)
  {
    n = 10 * n + (s[i] - '0');
  }
  if(s[i] == '.')
  {
    j = i+1;
  }
  for(; s[j] >= '0' && s[j] <= '9'; j++)
  {
    n = 10 * n + (s[j] - '0');
    p = 10 * p;
  }
  return n / p;
}

int main()
{
  char s[] =  "123.456";
  printf("%lf\n", atof(s));
  return 0;
}
