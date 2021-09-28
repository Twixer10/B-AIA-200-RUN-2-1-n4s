##
## EPITECH PROJECT, 2020
## Makefile
## File description:
## make all my lib
##

SRC	=	alloc/alloc.c				\
		alloc/free.c				\
		array/my_split.c			\
		char/check_char.c			\
		get/array.c					\
		get/number.c				\
		get/stringy.c				\
		list/linked_list.c			\
		my_asprintf/my_asflush.c	\
		my_asprintf/my_asprintf.c	\
		my_asprintf/my_asput.c		\
		my_mprintf/base.c			\
   		my_mprintf/long.c			\
   		my_mprintf/short.c			\
        my_mprintf/printflag.c		\
   		my_mprintf/my_mprintf.c		\
		my_printf/base.c			\
		my_printf/long.c			\
		my_printf/short.c			\
		my_printf/printflag.c		\
		my_printf/my_printf.c		\
		number/check.c				\
		number/math.c				\
		string/case.c				\
		string/check_case.c			\
		string/check_char.c			\
		string/check_num.c			\
		string/cmp.c				\
		string/concat.c				\
		string/cpy.c				\
		string/stringy.c			\
		write/char.c				\
		write/number.c				\
		write/stringy.c			\
		utility/check_help.c			\
		utility/exit.c
		

CC 	=	 gcc

OBJ	=	$(SRC:.c=.o)

NAME	=	libmy.a

MAKE 	= 	make

COMP	= 	ar rc

COLOR	=	\033[1;32m

NC	=	\033[0m

all:	$(OBJ)
	@echo -e "${COLOR}Compilation LIB${NC}"
	@$(COMP) $(NAME) $(OBJ)

clean:
	@echo -e "${COLOR}Clean LIB${NC}"
	@rm -f $(OBJ)
	@rm -f *~
	@rm -f *.o

fclean:
	@rm -f $(NAME)

re: fclean all
