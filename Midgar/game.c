#include <unistd.h>
#include <stdlib.h>
#include "structure.h"
#include "prototype.h"

t_creature	*getCreature();

void	partie(char *pn, char *ps)
{
  char	*cn;
  char	entree[20];

  cn = "-n";
  if (my_strcmp(pn,cn) == 0)
    {
      my_putstr("votre pseudo est : ");
      my_putstr(ps);
      my_putchar('\n');
      my_putstr(getCreature());
      my_putchar('\n');
      my_putstr("votre tour > ");
      my_strcpy(entree,readLine());
    }
  else
    my_putstr("rien afficher");

}
