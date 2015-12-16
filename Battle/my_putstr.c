/*
** my_putstr.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Mon Dec 14 19:27:45 2015 SENHAJI Sophia
** Last update Mon Dec 14 19:28:34 2015 SENHAJI Sophia
*/

#include "fonctions.h"

void	my_putstr(char str[])
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i++;
    }
}
