#include <stdio.h>
#include <string.h>

 void squeeze(char s[], int c)
 {
     int i;
     int j = 0;
     for(i=0;s[i]!='\0';i++)
     {
         if(s[i] != c)
         {
             s[j++] = s[i];
         }
     }
     s[j] = '\0';
     printf("%s\n", s);
 }

 int main()
 {
     char s[] = "qwecrty";
     int c = 'c';
     squeeze(s, c);
     return 0;
 }
