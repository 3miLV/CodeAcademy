#include <stdio.h>

void lower(char s[])
{
        int i = 0;
        while(s[i]!='\0')
        {
                if(s[i] >= 'A' && s[i] <='Z')
                {
                        s[i] = s[i] + 32;
                }
                i++;
        }
        printf("%s\n", s);
        return;
}

int main()
{
    char s[] = "QWERTY";
    lower(s);
    return 0;
}
