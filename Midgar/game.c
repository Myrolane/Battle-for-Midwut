#include <unistd.h>
#include <stdlib.h>
#include "structure.h"
#include "prototype.h"


void	partie(char *pn, char *ps)
{
  char		*cn;

  cn = "-n";
  if (my_strcmp(pn,cn) == 0)
    {
      my_putstr("votre pseudo est : ");
      my_putstr(ps);
      my_putchar('\n');
      affcreature();
    }
  else
    my_putstr("rien afficher");

}
