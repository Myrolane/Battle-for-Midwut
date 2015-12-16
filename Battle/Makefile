##
## Makefile for  in /home/kenrelya/Documents/ProjetC/senhaj_s/Battle
## 
## Made by SENHAJI Sophia
## Login   <senhaj_s@etna-alternance.net>
## 
## Started on  Mon Dec 14 17:26:29 2015 SENHAJI Sophia
## Last update Wed Dec 16 18:59:06 2015 SENHAJI Sophia
##

CC =	gcc
NAME = 	sta
SRC = 	sta.c \
	my_putchar.c \
	my_putstr.c \
	readline.c \
	random.c \
	getCreature.c \
	fonctions.c \
	liste.c
OBJ = $(SRC:%.c=%.o)
RM = rm -f
CFLAGS = -W -Werror -Wall -Wextra -ansi
$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

all:		$(NAME)

clean:
	$(RM) $(OBJ)

fclean:		clean
	$(RM) $(NAME)

re :	fclean all