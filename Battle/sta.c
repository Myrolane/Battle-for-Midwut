/*
** sta.c for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
** 
** Made by SENHAJI Sophia
** Login   <senhaj_s@etna-alternance.net>
** 
** Started on  Mon Dec 14 17:04:11 2015 SENHAJI Sophia
** Last update Wed Dec 16 18:56:06 2015 SENHAJI Sophia
*/

#include <unistd.h>
#include <stdlib.h>
#include "fonctions.h"

t_creature	*getCreature();

void	affcreature(t_profil **profil)
{
  t_creature	*creature;
  char		*pokemon;
  
  creature = malloc(sizeof(*creature));
  creature = getCreature();
  pokemon = creature->name;
  my_putstr("\n un ");
  my_putstr(pokemon);
  my_putstr(" sauvage apparait !\n");
  action(profil, pokemon);
}

void	catchCreature(t_profil **profil, char *pokemon)
{
  int	nbr;

  nbr = random();
  if (nbr == 1)
    {
      my_putstr("la capture a reussi\n");
      affdetail(profil, pokemon);
    }
  else
    {
      my_putstr("la creature s enerve, vous fuyez le combat\n");
      affcreature(profil);
    }
}

void	my_test(t_profil **profil, char *choix, char *pokemon)
{
  if (my_strcmp(choix, "magic catch") == 0)
    catchCreature(profil, pokemon);
  else if (my_strcmp(choix,"slash") == 0)
    my_putstr(" ");
  else if (my_strcmp(choix,"fire") == 0)
    my_putstr(" ");
  else if (my_strcmp(choix,"gamble") == 0)
    my_putstr(" ");
  else if (my_strcmp(choix,"rest") == 0)
    my_putstr(" ");
  else if (my_strcmp(choix,"quit") == 0)
    my_putstr("Vous allez quitter le programme");
  else
    action(profil, pokemon);
}



void	gameOoB(t_profil **profil)
{
  char	*input;

  do
    {
      my_putstr("Choose your play : ");
      input = readLine();
    }while (my_strcmp(input, "chosen one") != 0 && 
	    my_strcmp(input, "fight") != 0 &&
	    my_strcmp(input, "quit") != 0 &&
	    my_strcmp(input, "team") != 0);
  if (my_strcmp("fight", input) == 0)
      affcreature(profil);
  else if (my_strcmp("quit", input) == 0)
      my_putstr("Vous allez quitter le programme\n");
  else if (my_strcmp("chosen one", input) == 0)
    {
      my_putstr("You are the chosen one\n");
      gameOoB(profil);
    }
  else if (my_strcmp("team", input) == 0)
    {
      my_putstr("Here's your team\n");
      showCreature(profil);
      gameOoB(profil);
    }
}

int	main(int argc, char **argv)
{
  t_profil	**profil;

  profil = malloc(sizeof(t_profil*));
  init(*profil);
  if (argc != 3 || my_strcmp(argv[1], "-n") != 0)
    my_putstr("USAGE : -n YourName\n");
  else
    {
      my_putstr("Welcome ");
      my_putstr(argv[2]);
      my_putchar('\n');
      gameOoB(profil);
    }
  return (0);
}
