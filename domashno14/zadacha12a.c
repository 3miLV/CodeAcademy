#include <stdio.h>
#include <string.h>

double atof(char *s)
{
  int n=0;
  double p=1;
  for(;*s>= '0' && *s <= '9';s++)
  {
    n = 10 * n + (*s - '0');
  }
  if(*s == '.')
  {
    s++;
  }
  for(;*s>= '0' && *s<= '9';s++)
  {
    n = 10 * n + (*s - '0');
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
