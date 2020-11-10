#include <stdio.h>
#include <string.h>

double atof(char s[])
{
    int i, j;
    int t = 0;
    int n=0;
    int len = strlen(s);
    double p=1;
    char s_copy[16];
    char sign;
    for(i=0; i<len; i++)
    {
        if(s[i] >= '0' && s[i] <= '9' || s[i] == '.')
        {
            s_copy[t++] = s[i];
        }
        else if(s[i] == '-')
        {
            sign = s[i];
        }
    s_copy[i] = '\0';
    }
    for(i = 0; s_copy[i] >= '0' && s_copy[i] <= '9'; i++)
    {
        n = 10 * n + (s_copy[i] - '0');
    }
    if(s_copy[i] == '.')
    {
        j = i+1;
    }
    for(; s_copy[j] >= '0' && s_copy[j] <= '9'; j++)
    {
        n = 10 * n + (s_copy[j] - '0');
        p = 10 * p;
    }
    if(sign == '-')
        return -n / p;
    else
        return n / p;
}

int main()
{
  char s[] = "dsfsdgg-123.456";
  printf("%lf\n", atof(s));
  return 0;
}
