/*
** make_tab.c for tic tac toe in /home/Spiki/Colles/CPE_2016_stumper6/src
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 09:49:09 2017 Filliat Etienne
** Last update Wed May 24 11:47:59 2017 Filliat Etienne
*/

#include <stdlib.h>
#include "my.h"

static void	create_first_line(char *str, int size)
{
  int		i;
  
  i = 1;
  str[0] = '+';
  while (i <= size)
    {
      str[i] = '-';
      i++;
    }
  str[i] = '+';
  str[i + 1] = '\0';
}

static void	create_middle_line(char *str, int size)
{
  int		i;
  
  i = 1;
  str[0] = '|';
  while (i <= size)
    {
      str[i] = ' ';
      i++;
    }
  str[i] = '|';
  str[i + 1] = '\0';
}

static void	make_middle(char **tab, int size)
{
  int		i;

  i = 1;
  while (i <= size)
    {
      if ((tab[i] = x_malloc(size + 2)) == NULL)
	return ;
      create_middle_line(tab[i], size);
      i++;
    }
  if ((tab[i] = x_malloc(size + 2)) == NULL)
    return ;
  if ((tab[i + 1] = x_malloc(size + 2)) == NULL)
    return ;
}

char		**make_tab(int size)
{
  char		**tab;

  if ((tab = malloc(sizeof(char *) * (size + 2))) == NULL)
    return (NULL);
  if ((tab[0] = x_malloc(sizeof(char) * (size + 2))) == NULL)
    return (NULL);
  create_first_line(tab[0], size);
  make_middle(tab, size);
  create_first_line(tab[size + 1], size);
  tab[size + 2] = NULL;
  return (tab);
}
