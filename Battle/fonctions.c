/*
** fonctions.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:19:10 2015 SENHAJI Sophia
** Last update Wed Dec 16 19:06:37 2015 SENHAJI Sophia
*/

#include <unistd.h>
#include <stdlib.h>
#include "fonctions.h"

void	addCreature(t_profil **profil, char *pokemon)
{
  t_profil	**tmp;
  t_profil	*creature;

  tmp = malloc(sizeof(t_profil*));
  creature = malloc(sizeof(t_profil));
  *tmp = *profil;
  my_putchar('1');
  while ((*profil)->next != NULL)
    *profil = (*profil)->next;
  my_putchar('2');
  (*profil)-> next = creature;
  creature->creature = pokemon;
  *profil = *tmp;
  my_putstr("Le pokemon a ete ajoute a l'equipe");
}

void    my_put_nbr(int n)
{
  int   tab[50];
  int   i;
  int   j;
  int   p;

  j = 0;
  i = 0;
  if (n < 0)
    {
      my_putchar('-');
      n = n * (-1);
    }
  if (n == 0)
    my_putstr("0");
  if (n == -2147483648)
    my_putstr("2147483648");
  while (n  > 0)
    {
      tab[i++] = n % 10;
      n = n / 10;
      j++;
    }
  i = 0;
  p = j - 1;
  while (i++ < j)
    my_putchar(tab[p--] + 48);
}

void	affdetail(t_profil **profil, char *pokemon)
{
  t_creature	*detailcrea;

  detailcrea = malloc(sizeof(*detailcrea));
  detailcrea = getCreature();
  
  my_putstr("nom : ");
  my_putstr(pokemon);
  my_putstr("\nlvl : ");
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
  addCreature(profil, pokemon);
}

void	action(t_profil **profil, char *pokemon)
{
  char	entreea[20];

  my_putchar('\n');
  my_putstr("votre tour > ");
  my_strcpy(entreea,readLine());
  my_test(profil, entreea,pokemon);
}

int my_strcmp(char *s1, char *s2)
{
  int	i;
  
  i = 0;
  while (s1[i] != '\0')
    {
      if (s2[i] == '\0')
	{
	  return (1);
	}
      if (s1[i] < s2[i])
	{
	  return (-1);
	}
      if (s1[i] > s2[i])
	{
	  return (1);
	}
      i++;
    }
  if (s2[i] != '\0')
    {
      return (-1);
    }
  return (0);
}
