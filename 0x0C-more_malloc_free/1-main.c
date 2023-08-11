#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
  char *concat;
  char *test;

  concat = string_nconcat("Best ", "School !!!", 6);
  test = string_nconcat(NULL, "School !!!", 6);
  printf("%s\n", concat);
  printf("%s\n", test);

  free(concat);
  return (0);
}
