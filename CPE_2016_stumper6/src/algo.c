/*
** algo.c for algo in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 11:49:18 2017 jeremy elkaim
** Last update Wed May 24 11:52:54 2017 Filliat Etienne
*/

#include "my.h"

static int	checkline(int i, int o, int size, char **tab)
{
  int	count;

  count = 0;
  if ((o == 1 && tab[i][o] != ' ') || o != size + 1)
    {
      o = o + 1;
      count = count + 1;
    }
  else if (tab[i][o] == ' ')
    return (0);
  if (count == size)
    return (1);
  return (0);
}

static int	checkdiag1(int i,int o, int size, char **tab)
{
  int	count;

  count = 0;
  if (o == 1 && i == 1)
    {
      while (tab[i][o] != ' ')
	{
	  i = i + 1;
	  o = o + 1;
	  count = count + 1;
	}
    }
  else if (tab[i][o] == ' ')
    return (0);
  if (count == size)
    return (1);
  return (0);
}

static int	checkdiag2(int i,int o, int size, char **tab)
{
  int	count;

  count = 0;
  if (o == size && i == 1)
    {
      while (tab[i][o] != ' ')
	{
	  i = i + 1;
	  o = o - 1;
	  count = count + 1;
	}
    }
  else if (tab[i][o] == ' ')
    return (0);
  if (count == size)
    return (1);
  return (0);
}

static int	checkdiag(int i,int o, int size, char **tab)
{
  if (checkdiag1(i, o, size, tab) == 1)
    return (1);
  if (checkdiag2(i, o, size, tab) == 1)
    return (1);
  if (checkline(i, o, size, tab) == 1)
    return (1);
  if (checkline2(i, o, size, tab) == 1)
    return (1);
  return (0);
}

int	my_algo(char **av, int size)
{
  int	i;
  int	o;
  int	count;

  o = 1;
  i = 1;
  count = 0;
  while (av[i] != '\0')
    {
      if (count == size)
	return (1);
      if (av[i][o] == '\0')
	{
	  i = i + 1;
	  o = 0;
	}
      if (checkdiag(i, o, size, av) == 1)
	count = size;
      o = o + 1;
    }
  return (0);
}
