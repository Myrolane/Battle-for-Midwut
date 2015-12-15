/*
** my_strcpy.c for my_strcpy in /home/debian/repertoire_rendu/my_strcpy
** 
** Made by THEOPHILE Mylan
** Login   <theoph_m@etna-alternance.net>
** 
** Started on  Thu Oct 22 16:50:05 2015 THEOPHILE Mylan
** Last update Mon Oct 26 19:20:59 2015 THEOPHILE Mylan
*/

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
