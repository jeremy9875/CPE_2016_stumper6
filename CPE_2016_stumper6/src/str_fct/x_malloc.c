/*
** x_malloc.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 08:15:47 2017 Filliat Etienne
** Last update Wed May 24 09:08:22 2017 Filliat Etienne
*/

#include <stdlib.h>

static char	*my_memset(char *mal, char c, int size)
{
  int		i;

  i = 0;
  while (i < size)
    {
      mal[i] = c;
      i++;
    }
  mal[i] = '\0';
  return (mal);
}

char		*x_malloc(int size)
{
  char		*mal;

  if ((mal = malloc(size + 2)) == NULL)
    return (NULL);
  return (my_memset(mal, '\0', size + 1));
}
