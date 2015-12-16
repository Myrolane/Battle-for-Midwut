#include <sys/types.h>
#include <stdlib.h>
#include <unistd.h>
#include "structure.h"
#include "prototype.h"

t_creature	*getCreature();

void	affcreature()
{
  t_creature	*creature;
  char		*pokemon;
  
  creature = malloc(sizeof(*creature));
  creature = getCreature();
  pokemon = creature->name;
  my_putchar('\n');
  my_putstr("un ");
  my_putstr(pokemon);
  my_putstr(" sauvage apparait !");
  my_putchar('\n');
  action(pokemon);
}
