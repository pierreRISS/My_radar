##
## EPITECH PROJECT, 2024
## B-MUL-100-LYN-1-1-myradar-pierre.riss
## File description:
## Makefile
##

SRC		=		*.c
OBJ		=	${SRC:.c=.o}
LIB		= 	my_radar.a
ODIR	=	obj
OTHER_LIB = list_chainee/*.c error_handling/*.c math/*.c quad_tree/*.c
PARAM = -lm -lcsfml-window -lcsfml-system -lcsfml-graphics

all:		$(OBJ)
	$(MAKE) -C lib/my
	gcc -c $(SRC)
	mv $(OBJ) $(ODIR)
	ar rcs $(LIB) $(ODIR)/*.o
	gcc -o  my_radar *.c $(OTHER_LIB) lib/my/libmy.a $(PARAM) -g
clean:
	$(MAKE) -C lib/my clean
	rm $(ODIR)/$(OBJ)
fclean:
	make clean
re:
	make fclean
