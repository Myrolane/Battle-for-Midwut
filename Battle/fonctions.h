/*
** fonctions.h for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:20:29 2015 SENHAJI Sophia
** Last update Wed Dec 16 18:58:34 2015 SENHAJI Sophia
*/

#include "structure.h"
#ifndef __FONCTIONS_H__
#define __FONCTIONS_H__

int		my_strcmp(char *str1, char *str2);
void		my_putchar(char c);
void		my_putstr(char str[]);
int		random();
char		*readLine();
char		*my_strcpy();
void		action(t_profil **profil, char *pokemon);
char		*my_strdup(char *str);
void		my_test(t_profil **profil, char *choix, char *pokemon);
void		affdetail(t_profil **profil, char *pokemon);
void		my_put_nbr(int n);
t_creature	*getCreature();
void		showCreature(t_profil **profil);
t_profil	*init(t_profil *list);
#endif
