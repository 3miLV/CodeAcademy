#include <stdio.h>

void printString(char s[])
{
  int i = 0;
  while(s[i] != '\0') {
    printf("%c", s[i]);
    i++;
  }
}

int main()
{
  char str[] = "string";
  printString(str);
  return 0;
}
