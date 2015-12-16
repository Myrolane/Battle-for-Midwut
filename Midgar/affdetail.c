#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"
#include "structure.h"

t_creature	*getCreature();

void	affdetail(char *pokemon)
{
  t_creature	*detailcrea;

  detailcrea = malloc(sizeof(*detailcrea));
  detailcrea = getCreature();
  
  my_putstr("nom : ");
  my_putstr(pokemon);
  my_putchar('\n');
  my_putstr("lvl : ");
  my_put_nbr(detailcrea->lvl);
  my_putchar('\n');
  my_putstr("pv : ");
  my_put_nbr(detailcrea->pv);
  my_putchar('\n');
  my_putstr("pvmax : ");
  my_put_nbr(detailcrea->pvmax);
  my_putchar('\n');
  my_putstr("pmmax : ");
  my_put_nbr(detailcrea->pmmax);
  my_putchar('\n');
}
