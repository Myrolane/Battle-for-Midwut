##
## Makefile for Makefile in /home/debian/librairie/theoph_m/libmy_01
## 
## Made by THEOPHILE Mylan
## Login   <theoph_m@etna-alternance.net>
## 
## Started on  Sun Oct 25 00:33:05 2015 THEOPHILE Mylan
## Last update Sat Nov  7 13:19:13 2015 THEOPHILE Mylan
##

CC	 = gcc
CFLAGS	 = -W -Werror -Wall -ansi -Wextra
NAME	 = sta
SRC	 = getCreature.c \
	   readline.c \
	   my_strcmp.c \
	   my_strcpy.c \
	   game.c \
	   my_strlen.c \
	   my_strdup.c \
	   my_putchar.c \
	   my_put_nbr.c \
	   my_putstr.c \
	   affcreature.c \
	   action.c \
	   random.c \
	   affdetail.c \
	   my_test.c \
	   main.c
OBJ	 = $(SRC:%.c=%.o)

all:		$(NAME)

$(NAME):	$(OBJ)
		$(CC) $(OBJ) -o $(NAME)

clean:
		rm -rf $(OBJ)

fclean:		clean
		rm -rf $(NAME)
