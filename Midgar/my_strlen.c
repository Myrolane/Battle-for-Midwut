int	my_strlen(char *str)
{
  int i;
  int cpt;

  i = 0;
  cpt = 0;
  while (str[i] != '\0')
    {
      cpt++;
      i++;
    }
  return (cpt);
}
