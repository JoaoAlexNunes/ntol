#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int fizzbuzz;
  char result[11] = "";

  if (argc < 2)
  {
    printf("Usage: %s <number>\n", argv[0]);
    return 1;
  }

  fizzbuzz = atoi(argv[1]);

  if (fizzbuzz % 3 == 0)
  {
    strcat(result, "fizz");
  }

  if (fizzbuzz % 5 == 0)
  {
    strcat(result, "buzz");
  }

  if (result[0] == '\0')
  {
    printf("%d\n", fizzbuzz);
    return 0;
  }

  printf("%s\n", result);
  return 0;
}