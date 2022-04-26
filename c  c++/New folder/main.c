#include <stdlib.h>
#include <stdio.h>

void *malloc(size_t size);

void exemple(void)
{
  char *string;
  
  string = malloc(sizeof(char) * 5);
  if (string == NULL)
    return;
  string[0] = 'H';
  string[1] = 'e';
  string[2] = 'y';
  string[3] = '!';
  string[4] = '\0';
  printf("%s\n", string);
  free(string);
}