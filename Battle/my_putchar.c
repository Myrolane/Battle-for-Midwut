/*
** my_putchar.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Mon Dec 14 19:26:03 2015 SENHAJI Sophia
** Last update Mon Dec 14 19:26:47 2015 SENHAJI Sophia
*/

#include <unistd.h>

void	my_putchar(char c)
{
  write(1, &c, 1);
}
