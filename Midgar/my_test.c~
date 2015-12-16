#include <unistd.h>
#include <stdlib.h>
#include "prototype.h"
#include "structure.h"

void	my_test(char *choix, char *pokemon)
{
  char	*ball;
  char	*esc;
  int	nbr;

  ball = "magic catch";
  esc  = "help me !!!";
  if (my_strcmp(choix,ball) == 0)
    {
      nbr = random();
      if (nbr == 1)
	{
	  my_putstr("la capture a reussi\n");
	  affdetail(pokemon);
	}
      else
	{
	  my_putstr("la creature s enerve, vous fuyez le combat\n");
	  affcreature();
	}
    }
  else if (my_strcmp(choix,esc) == 0)
      affcreature();
  else
    action();
}
