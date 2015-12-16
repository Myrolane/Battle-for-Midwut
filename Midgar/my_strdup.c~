#include <stdlib.h>
#include <unistd.h>
void	my_putchar();
int	my_strlen();
void	my_putstr();
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
