#include <stdio.h>
#include <string.h>


void reverse(char *s){
    int c, i, j;
    for(i = 0, j = strlen(s) - 1; i < j; i++, j--){
        c = s[i];
        s[i] = s[j];
        s[j] = c;
    }
}

void itob(int n, char s[], int b)
{
    int i=0;
    char rez[16];
    do
    {
        if(n % b < 10)
        {
            s[i++] = n % b + '0';
        }
        else
        {
            s[i++] = n % b + '0' + 7;
        }
    }
    while((n /= b) > 0);
    s[i] = '\0';
    reverse(s);
    printf("%s\n", s);
    return;
}

int main()
{
    int n = 123;
    char s[32];
    int b = 2;
    itob(n, s, b);
    return 0;
}
