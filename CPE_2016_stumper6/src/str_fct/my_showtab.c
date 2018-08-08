/*
** my_showtab.c for tic tac toe in /home/Spiki/Colles/CPE_2016_stumper6/src/str_fct
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 10:09:25 2017 Filliat Etienne
** Last update Wed May 24 10:10:49 2017 Filliat Etienne
*/

#include <stdlib.h>
#include "my.h"

void		my_showtab(char **tab)
{
  int		i;

  i = 0;
  while (tab[i] != NULL)
    {
      my_putstr(tab[i]);
      my_putchar('\n');
      i++;
    }
}
