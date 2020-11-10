#include <stdio.h>
#include <string.h>

void reverseString(char to[], char from[])
{
  int i = 0;
  int j = strlen(from) - 1;
  while(from[i] != '\0') {
    to[i] = from[j];
    i++;
    j--;
  }
  return;
}

int main()
{
  char from[] = "string";
  char to[16];
  reverseString(to, from);
  printf("%s\n", to);
  return 0;
}
