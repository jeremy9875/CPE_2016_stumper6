/*
** algo_end.c for algo_end in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 12:18:33 2017 jeremy elkaim
** Last update Wed May 24 13:18:35 2017 jeremy elkaim
*/

#include "my.h"

int	checkline2(int i, int o, int size, char **tab)
{
  int	count;

  count = 0;
  if ((tab[i][o] != ' ' && i == 1) || i != size + 1)
    {
      i = i + 1;
      count = count + 1;
    }
  else if (tab[i][o] == ' ')
    return (0);
  if (count == size)
    return (1);
  return (0);
}
