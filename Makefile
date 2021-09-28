##
## EPITECH PROJECT, 2021
## makefile exe
## File description:
## fct
##

SRC	=	src/main.c			\
		src/command/drive.c	\
		src/command/get.c	\
		src/command/launch.c\
		src/command/lidar.c	\
		src/utility/line.c	\
		src/struct.c

MAKE	=	make

PLIB	=	lib/my

CFLAGS	=	-W -Wextra -Wall -Werror -g3

LFLAGS	=	-L $(PLIB) -lmy

IFLAGS	=	-I include/

CC	=	gcc

NAME	=	ai

all:
	$(MAKE) -C $(PLIB) all
	$(CC) -o $(NAME) $(SRC) $(IFLAGS) $(LFLAGS) $(CFLAGS) -D __GLIBC_USE -lm

clean:
	rm -f *~
	rm -f *.o

fclean:	clean
	rm -f $(NAME)

re:	fclean all