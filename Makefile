##
## Makefile for Makefile_printf in /home/lina_a/rendu/PSU_2014_my_printf
## 
## Made by lina_a
## Login   <lina_a@epitech.net>
## 
## Started on  Fri Nov 14 09:24:08 2014 lina_a
## Last update Fri Nov 14 09:24:08 2014 lina_a
##

CFLAGS  += -Wextra -Wall -I./include
LDFLAGS	+=

CC	= gcc

RM	= rm -f

SRCS	= src/my_printf.c \
	  src/my_putchar.c \
	  src/my_put_nbr.c \
	  src/my_putstr2.c \
	  src/my_putstr.c \
	  src/main.c \
	  src/my_strlen.c

NAME	= my_printf

OBJS	= $(SRCS:.c=.o)

all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) -o $(NAME) $(OBJS) $(LDLFLAGS)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
