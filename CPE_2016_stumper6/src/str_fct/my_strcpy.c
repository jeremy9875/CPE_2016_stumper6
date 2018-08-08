/*
** my_strcpy.c for Tic Tac Toe in /home/Spiki/Colles/CPE_2016_stumper6
** 
** Made by Filliat Etienne
** Login   <Spiki@epitech.net>
** 
** Started on  Wed May 24 08:35:22 2017 Filliat Etienne
** Last update Wed May 24 08:40:03 2017 Filliat Etienne
*/

char		*my_strcpy(char *dest, char *src)
{
  int		x;
  int		i;
  
  i = 0;
  x = 0;
  while (dest[i] != '\0')
    i++;
  while (src[x] != '\0')
    {
      dest[i] = src[x];
      i++;
      x++;
    }
  return (dest);
}
