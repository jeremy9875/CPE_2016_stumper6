/*
** check_input.c for check_input in /home/jeremy.elkaim/CPE_2016_stumper6/src
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 13:20:56 2017 jeremy elkaim
** Last update Wed May 24 13:47:27 2017 jeremy elkaim
*/

int	check_input(char *s, int o, int p)
{
  int	i;
  int	b;

  i = 0;
  b = 0;
  while (s[i] != '\0')
    {
      if (s[i] >= '0' && s[i] <= '9' || s[i] == ',')
	{
	  if (s[i + 1] == ',')
	   o = my_getnbr2(s, i);
	  else if (s[i] == ',')
	    {
	      while (s[i] != '\0')
		{
		  i = i + 1;
		  b = b + 1;
		}
	    }
	  p = my_getnbr2(s, b);
	}
      else
	return (1);
      i = i + 1;
    }
  return (0);
}
