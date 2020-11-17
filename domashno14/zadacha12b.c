#include <stdio.h>
#include <string.h>

void my_reverse(char *s)
{
    int l = strlen(s);
    char c;
    char *p = &s[l-1];
    //for (int i = 0; i < l / 2; i++)
    while(s < p )
    {
        c = *s;
        *s = *p;
        *p = c;
        s++;
        p--;
    }
}

int main()
{
    char s[] = "qwerty";
    my_reverse(s);
    printf("%s", s);


}
