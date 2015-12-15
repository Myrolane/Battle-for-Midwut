/*
** my_putstr.c for my_putstr in /home/debian/repertoire_rendu/my_putstr
** 
** Made by THEOPHILE Mylan
** Login   <theoph_m@etna-alternance.net>
** 
** Started on  Wed Oct 21 10:21:57 2015 THEOPHILE Mylan
** Last update Tue Oct 27 20:27:28 2015 THEOPHILE Mylan
*/

#include <unistd.h>
void	my_putchar();

void	my_putstr(char *str)
{
  while (*str != '\0')
  {
    my_putchar(*str);
    str++;
  }
}

