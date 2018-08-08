/*
** game_loop.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 11:14:45 2017 Filliat Etienne
** Last update Wed May 24 11:43:22 2017 Filliat Etienne
*/

#include "my.h"

static int	output_player(int i)
{
  if (i == 1)
    {
      my_putstr(PLY_1);
      i = 2;
    }
  else
    {
      my_putstr(PLY_2);
      i = 1;
    }
  
}

void		game_loop(char p1, char p2, char **tab, int size)
{
  char		*inp;
  int		i;

  i = 1;
  my_showtab(tab);
  while (my_algo(tab, size) == 0)
    {
      i = output_player(i);
      while (check_input(inp = gnl()) == 1);
    }
}
