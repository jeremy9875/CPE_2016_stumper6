/*
** write.c for write in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 10:23:36 2017 jeremy elkaim
** Last update Wed May 24 13:43:06 2017 jeremy elkaim
*/

#include <unistd.h>
#include "../include/my.h"

void	my_putchar(char c)
{
  write (1, &c, 1);
}

void	my_putstr(char *str)
{
  int	i;

  i = 0;
  while (str[i] != '\0')
    {
      my_putchar(str[i]);
      i = i + 1;
    }
}

int	my_getnbr(char *str)
{
  int	i;
  int	value;

  value = 0;
  i = 0;
  while (str[i] != '\0')
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  value *= 10;
	  value += str[i] - 48;
	}
      else
	return (value);
      i++;
    }
  return (value);
}

int	my_getnbr2(char *str, int nb)
{
  int	i;
  int	value;

  value = 0;
  i = 0;
  while (str[i] != '\0' && i != nb)
    {
      if (str[i] >= '0' && str[i] <= '9')
	{
	  value *= 10;
	  value += str[i] - 48;
	}
      else
	return (value);
      i++;
    }
  return (value);
}

int	my_putnbr(int nb)
{
  if (nb < 0)
    {
      my_putchar('-');
      nb = nb * - 1;
    }
  if (nb >= 10)
    {
      my_putnbr(nb / 10);
      my_putchar(nb % 10 + 48);
    }
  if (nb < 10)
    my_putchar(nb % 10 + 48);
  return (nb);
}
