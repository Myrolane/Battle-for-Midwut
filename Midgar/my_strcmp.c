/*
** my_strcmp.c for my_strcm in /home/debian/repertoire_rendu/my_strcmp
** 
** Made by THEOPHILE Mylan
** Login   <theoph_m@etna-alternance.net>
** 
** Started on  Thu Oct 22 22:36:35 2015 THEOPHILE Mylan
** Last update Tue Oct 27 22:03:40 2015 THEOPHILE Mylan
*/

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
