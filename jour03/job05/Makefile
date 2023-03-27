.PHONY: all


SRC = main.c
SRCS := $(SRC:.c=.o)

TARGET = my_recurs

COMP_FLAG = c
OBJ_FLAG = o

$(TARGET): $(SRCS)
	gcc -$(OBJ_FLAG) $(TARGET) $(SRCS)

all:
	$(TARGET)
