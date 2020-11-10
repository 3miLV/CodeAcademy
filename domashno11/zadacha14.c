#include <stdio.h>
void copy(char to[], char from[])
{
  int i = 0;
  while(from[i] != '\0') {
    to[i] = from[i];
    i++;
  }
  return;
}

int main()
{
  char from[] = "string";
  char to[16];
  copy(to, from);
  printf("%s\n", to);
  return 0;
}
