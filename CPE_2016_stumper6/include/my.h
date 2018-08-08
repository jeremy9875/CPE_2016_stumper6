/*
** my.h for my in /home/jeremy.elkaim/CPE_2016_stumper6/include
** 
** Made by jeremy elkaim
** Login   <jeremy.elkaim@epitech.net>
** 
** Started on  Wed May 24 10:18:48 2017 jeremy elkaim
** Last update Wed May 24 11:46:10 2017 Filliat Etienne
*/

#ifndef MY_H_
# define MY_H_

# define PLY_1	"Player 1> "
# define PLY_2	"Player 2> "
# define P1	"-p1"
# define P2	"-p2"
# define GRID	"-s"

char	*gnl();
int	check_input(char *str);
int	my_algo(char **av, int size);
void	game_loop(char p1, char p2, char **tab, int size);
int	checkline2(int i, int o, int size, char **tab);
int	change_param(char **av);
int	game(int size, char p1, char p2);
void	my_putchar(char c);
void	my_putstr(char *str);
int	my_strlen(char *str);
int	my_getnbr(char *str);
int	my_getnbr2(char *str, int nb);
int	my_putnbr(int nb);
int	my_strcmp(char *str, char *cmp);
int	display_grid(int size);
char	*x_malloc(int size);
char	*my_strcpy(char *dest, char *src);
char	**make_tab(int size);
void	my_showtab(char **tab);

#endif /* MY_H_ */
