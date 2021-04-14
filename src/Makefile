TAR = ../cquptnc
OBJ = main.o function.o
CC := gcc
RMRF := del

$(TAR):$(OBJ)
	$(CC) $(OBJ) -o $(TAR)

%.o:%.c
	$(CC) -c $^ -o $@


.PHONY:

clearall:
	$(RMRF) $(OBJ) $(TAR)

clear:
	$(RMRF) $(OBJ)