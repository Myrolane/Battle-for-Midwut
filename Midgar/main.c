#include <stdlib.h>
#include <unistd.h>
#include "prototype.h"
#include "structure.h"


void	partie();


int	main(int argc, char **argv)
{
  char	 *pseudo;
  char	 *paramName;

  my_put_nbr(argc);
  my_putchar('\n');
  paramName = argv[1];
  pseudo = argv[2];
  partie(paramName,pseudo);
  return (0);
}