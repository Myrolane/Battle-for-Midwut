#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"
#include "structure.h"

void	action(char *pokemon)
{
  char	entreea[20];

  my_putchar('\n');
  my_putstr("votre tour > ");
  my_strcpy(entreea,readLine());
  my_test(entreea,pokemon);
}
