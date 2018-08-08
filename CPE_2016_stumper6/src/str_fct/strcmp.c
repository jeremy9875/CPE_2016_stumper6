/*
** strcmp.c for strcmp in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 10:31:11 2017 jeremy elkaim
** Last update Wed May 24 10:07:34 2017 Filliat Etienne
*/

int	my_strcmp(char *str, char *cmp)
{
  int	i;

  i = 0;
  while (str[i] != '\0'&& cmp[i] != '\0')
    {
      if (str[i] != cmp[i])
	return (1);
      i = i + 1;
    }
  return (0);
}
