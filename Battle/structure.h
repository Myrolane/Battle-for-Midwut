/*
** structure.h for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Wed Dec 16 11:28:41 2015 SENHAJI Sophia
** Last update Wed Dec 16 11:28:43 2015 SENHAJI Sophia
*/

#ifndef __STRUCTURE_H__
#define __STRUCTURE_H_

typedef struct  s_creature
{
  char		*name;
  int		lvl;
  int		pv;
  int		pvmax;
  int		pm;
  int		pmmax;
}		t_creature;

typedef struct s_perso
{
  char		 *pseudo;
  char		 *creature;
  struct s_perso *next;
}		 t_profil;

#endif
