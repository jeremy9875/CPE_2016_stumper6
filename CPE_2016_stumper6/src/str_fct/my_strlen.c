/*
** my_strlen.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 08:27:18 2017 Filliat Etienne
** Last update Wed May 24 08:28:11 2017 Filliat Etienne
*/

int		my_strlen(const char *str)
{
  int		i;

  i = 0;
  while (str[i] != '\0')
    i++;
  return (i);
}
