/*
** my_put_nbr.c for my_put_nbr in /home/debian/repertoire_rendu/my_put_nbr
** 
** Made by THEOPHILE Mylan
** Login   <theoph_m@etna-alternance.net>
** 
** Started on  Sun Oct 25 00:10:36 2015 THEOPHILE Mylan
** Last update Sun Oct 25 00:11:27 2015 THEOPHILE Mylan
*/

void    my_putchar();
void    my_putstr();

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
