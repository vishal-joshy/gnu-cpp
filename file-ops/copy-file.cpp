#include <stdio.h>
#include <iostream>
#include <ctype.h>

int main(int argc, char *argv[])
{
  int c = 0;

  while ((c = getchar()) != EOF)
  {
      putchar(c);
  }
  return 0;
}

//build and run using ./a.out < <filename>
