SRC_MAIN = main.c
SRC_PUT = my_put.c

OBJ_MAIN = main.o
OBJ_PUT = my_put.o

TARGET = my_make_evolve

$(TARGET): $(OBJ_MAIN) $(OBJ_PUT)
	gcc -o $(TARGET) $(OBJ_MAIN) $(OBJ_PUT)

$(OBJ_PUT) : $(SRC_PUT)
	gcc -c $(SRC_PUT) 

$(OBJ_MAIN) : $(SRC_MAIN)
	gcc -c $(SRC_MAIN) 