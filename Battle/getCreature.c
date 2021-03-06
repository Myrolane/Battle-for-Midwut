/*
** getCreature.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Wed Dec 16 11:29:51 2015 SENHAJI Sophia
** Last update Wed Dec 16 14:49:30 2015 SENHAJI Sophia
*/

#include <stdlib.h>
#include <string.h>
#include <time.h>
#include <unistd.h>
#include "fonctions.h"

#define NBCREA 5

char	*my_strcpy(char *dest, char *src)
{
   int	i;

   i = 0;
   while (src[i] != '\0')
   {
     dest[i] = src[i];
     i++;
   }
   dest[i] = '\0';
   return (dest);
}
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
static t_creature g_creatures[] =
  {
    {"Koopa", 1, 10, 10, 20, 20},
    {"Bob bomb", 1, 10, 10, 20, 20},
    {"Yoshi", 1, 10, 10, 20, 20},
    {"Maskas", 1, 10, 10, 20, 20},
    {"Kucco", 1, 10, 10, 20, 20},
    {NULL, 0, 0, 0, 0, 0}    
  };


t_creature	*getCreature()
{
  int		rnd;
  t_creature	*crea;

  srand(time (NULL));
  rnd = rand() % NBCREA;
  if ((crea = malloc(sizeof(t_creature))) == NULL)
    return (NULL);
  crea->name = my_strdup(g_creatures[rnd].name);
  if (!crea->name)
    return (NULL);
  crea->lvl = g_creatures[rnd].lvl;
  crea->pv = g_creatures[rnd].pv;
  crea->pvmax = g_creatures[rnd].pvmax;
  crea->pm = g_creatures[rnd].pm;
  crea->pmmax = g_creatures[rnd].pmmax;
  return (crea);
}
