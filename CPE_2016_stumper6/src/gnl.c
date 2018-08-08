/*
** gnl.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 08:13:14 2017 Filliat Etienne
** Last update Wed May 24 09:27:58 2017 Filliat Etienne
*/

#include <stdlib.h>
#include <unistd.h>
#include "my.h"

static int	verif_buff(const char *buff)
{
  int		i;

  i = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] > 13 && buff[i] < 32)
	return (84);
      i++;
    }
  return (0);
}

static char	*realoc_stack(char *buff, char *stack)
{
  char		*new_stack;
  
  if (verif_buff(buff) == 84)
    return (NULL);
  if ((new_stack = x_malloc(my_strlen(buff) + my_strlen(stack))) == NULL)
    return (NULL);
  new_stack = my_strcpy(new_stack, stack);
  new_stack = my_strcpy(new_stack, buff);
  if (stack)
    free(stack);
  return (new_stack);
}

static int	check_line_end(const char *buff)
{
  int		i;
  
  i = 0;
  while (buff[i] != '\0')
    {
      if (buff[i] == '\n')
	return (1);
      i++;
    }
  return (0);
}

char		*gnl()
{
  int		stop;
  char		*stack;
  char		*buff;

  stop = 0;
  if ((stack = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
    return (NULL);
  while (read(0, buff, 10) != 0)
    {
      stop = check_line_end(buff);
      stack = realoc_stack(buff, stack);
      if (buff)
	free(buff);
      if ((buff = x_malloc(sizeof(char) * 10)) == NULL)
	return (NULL);
      if (stop == 1)
	return (stack);
    }
  return (stack);
}
