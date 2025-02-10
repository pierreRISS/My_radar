##
## EPITECH PROJECT, 2024
## B-CPE-100-LYN-1-1-cpoolday11-pierre.riss
## File description:
## Makefile
##

SRC		=		*.c
OBJ		=	${SRC:.c=.o}
LIB		= 	libmy.a
ODIR	=	obj

all:		$(OBJ)
	gcc -c $(SRC)
	mv $(OBJ) $(ODIR)
	ar rcs $(LIB) $(ODIR)/*.o
clean:
	rm $(ODIR)/$(OBJ)
fclean:
	make clean
re:
	make fclean
