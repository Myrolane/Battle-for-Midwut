/*
** random.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Wed Dec 16 11:29:16 2015 SENHAJI Sophia
** Last update Wed Dec 16 14:49:43 2015 SENHAJI Sophia
*/

#include <unistd.h>
#include <stdlib.h>
#include <time.h>
#include "fonctions.h"

int	random()
{
  int random;
  
  srand(time (NULL));
  random = rand() % 2;
  return (random);
}
