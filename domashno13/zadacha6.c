#include <stdio.h>
#include <string.h>

int countWords(char *s)
{
    int i;
    int count = 0;
    for(i=0;i<strlen(s);i++)
    {
        if(s[i] == ' '|| s[i] == '\t' || s[i] == '\n')
            count += 1;
    }
    return count;
}

int main()
{
    int rez;
    char s[] = {"Lorem ipsum dolor sit amet, consectetur adipiscing elit, "
               "sed do eiusmod tempor incididunt ut labore et dolore magna aliqua. "
               "Ut enim ad minim veniam, quis nostrud exercitation ullamco laboris "
               "nisi ut aliquip ex ea commodo consequat. Duis aute irure dolor in "
               "reprehenderit in voluptate velit esse cillum dolore eu fugiat nulla pariatur. "
               "Excepteur sint occaecat cupidatat non proident, "
               "sunt in culpa qui officia deserunt mollit anim id est laborum."};
    rez = countWords(s);
    printf("%d\n", rez);
    return 0;
}
