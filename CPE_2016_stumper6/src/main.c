/*
** main.c for main in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 10:15:27 2017 jeremy elkaim
** Last update Wed May 24 10:43:50 2017 jeremy elkaim
*/

#include "../include/my.h"

int	main(int ac, char **av)
{
  if (ac != 1)
    change_param(av);
  else
    game(3, 'X', 'O');
  return (0);
}
