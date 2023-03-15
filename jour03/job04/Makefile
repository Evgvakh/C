.PHONY: all clean fclean

SRC = main.c my_put.c
SRCS := $(SRC:.c=.o)

TARGET = my_make_evolve

COMP_FLAG = c
OBJ_FLAG = o

$(TARGET): $(SRCS)
	gcc -$(OBJ_FLAG) $(TARGET) $(SRCS)

all:
	$(TARGET)

clean:
	rm -f $(SRCS)
