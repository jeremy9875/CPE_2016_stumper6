/*
** parser.c for parser in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 10:22:30 2017 jeremy elkaim
** Last update Wed May 24 11:18:16 2017 Filliat Etienne
*/

#include <unistd.h>
#include "my.h"

int	change_param(char **av)
{
  int	i;
  int	size;
  char	p1;
  char	p2;

  i = 0;
  size = 3;
  p1 = 'X';
  p2 = 'O';
  while (av[i] != '\0')
    {
      if (my_strcmp(av[i], P1) == 0 && av[i + 1] != NULL)
	p1 = av[i + 1][0];
      if (my_strcmp(av[i], P2) == 0 && av[i + 1] != NULL)
	p2 = av[i + 1][0];
      if (my_strcmp(av[i], GRID) == 0 && av[i + 1] != NULL)
	size = my_getnbr(av[i+1]);
      i = i + 1;
    }
  game(size, p1, p2);
  return (0);
}

int	game(int size, char p1, char p2)
{
  char	**tab;

  if ((tab = make_tab(size)) == NULL)
    return (84);
  game_loop(p1, p2, tab, size);
  return (0);
}
