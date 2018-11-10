##
## Makefile for BSQ in /home/antoine/CPE_2015_BSQ
##
## Made by Antoine Baudrand
## Login   <antoine@epitech.net>
##
## Started on  Mon Dec 14 19:54:03 2015 Antoine Baudrand
## Last update Fri Dec 18 03:57:35 2015 Antoine Baudrand
##

CC = gcc

CFLAGS += -W -Wall -Werror -pedantic

RM = rm -f

NAME = example

SRC = main.c \
	  example1.c \
	  example2.c \
	  example3.c \
	  example4.c \
	  example5.c \
	  example6.c \

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(OBJS) -o $(NAME)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
