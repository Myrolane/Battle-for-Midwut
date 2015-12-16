/*
** liste.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Wed Dec 16 17:38:43 2015 SENHAJI Sophia
** Last update Wed Dec 16 19:02:23 2015 SENHAJI Sophia
*/

#include "fonctions.h"
#include <stdlib.h>

void	showCreature(t_profil **profil)
{
  t_profil	**tmp;

  tmp = malloc(sizeof(t_profil*));
  *tmp = *profil;

  while (*profil != NULL)
    {
      my_putstr((*profil)->creature);
      my_putchar('\n');
      *profil = (*profil)->next;
    }
  *profil = *tmp;
  free(tmp);
}

t_profil	*init(t_profil *list)
{
  list->pseudo = "";
  list->creature = "";
  list->next = NULL;
  return (list);
}
