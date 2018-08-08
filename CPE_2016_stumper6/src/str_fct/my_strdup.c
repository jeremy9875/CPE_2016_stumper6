/*
** my_strdup.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 08:30:41 2017 Filliat Etienne
** Last update Wed May 24 09:02:00 2017 Filliat Etienne
*/

#include <stdlib.h>
#include "my.h"

char		*my_strdup(char *str)
{
  int		i;
  char		*new_str;

  i = 0;
  if ((new_str = x_malloc(my_strlen(str))) == NULL)
    return (NULL);
  while (str[i] != '\0')
    {
      new_str[i] = str[i];
      i++;
    }
  if (str)
    free(str);
  return (new_str);
}
