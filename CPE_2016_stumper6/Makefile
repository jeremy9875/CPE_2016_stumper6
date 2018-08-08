##
## Makefile for Makefile in /home/jeremy.elkaim/CPE_2016_stumper6
## 
## Made by jeremy elkaim
## Login   <jeremy.elkaim@epitech.net>
## 
## Started on  Wed May 24 10:11:59 2017 jeremy elkaim
## Last update Wed May 24 11:55:53 2017 Filliat Etienne
##

CC	=	gcc

NAME	=	tictactoe

SRC	=	src/main.c		\
		src/parser.c		\
		src/gnl.c		\
		src/make_tab.c		\
		src/game_loop.c		\
		src/algo.c		\
		src/algo_end.c		\
		src/check_input.c	\
		src/str_fct/write.c	\
		src/str_fct/strcmp.c	\
		src/str_fct/my_strcpy.c	\
		src/str_fct/my_strdup.c	\
		src/str_fct/my_strlen.c	\
		src/str_fct/x_malloc.c	\
		src/str_fct/my_showtab.c

CFLAGS	+=	-W -Wall
CFLAGS	+= 	-I include/

RM	=	rm -rf

OBJ	=	$(SRC:.c=.o)

TMP	=	$(SRC:.c=.c~)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(SRC) -o $(NAME) $(CFLAGS)

clean:
		$(RM) $(OBJ)
		$(RM) $(TMP)

fclean: 	clean
		$(RM) $(NAME)

re: 		fclean all

.PHONY: 	all clean fclean re
