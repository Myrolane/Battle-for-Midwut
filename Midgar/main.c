#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include "structure.h"
#include "prototype.h"
	
void		partie();


int	main(int argc, char **argv)
{
  char		*pseudo;
  char		*paramName;

  if (argc == 3)
    {
      my_putchar('\n');
      paramName = argv[1];
      pseudo = argv[2];
      partie(paramName,pseudo);
    }
  else
    {
      my_putstr("les commandes sont invalides");
      my_putchar('\n');
    }
  return (0);
}
