#include <stdlib.h>
#include <unistd.h>

char	my_strcpy();

char	*my_strdup(char *str)
{
  char *mem;
  int  i;

  i = 0;

  while (str[i] != '\0')
    {
      i++;
    }
  mem = malloc(i);
  my_strcpy(mem,str);
  return (mem);
}
