CC			=	gcc
CFLAGS		=	-Wall -Wextra -Werror
SRC			= 	$(shell find ./src/ -name "*.c")
OBJ			=	$(SRC:.c=.o)
DIR			=	./build/
EXE			=	buffer
RM			=	rm -rf
INCLUDES	=	./includes

all: $(EXE) $(TEST_EXE)

$(EXE): $(DIR) $(OBJ)
	$(CC) $(CFLAGS) $(OBJ) -I $(INCLUDES) -o $(EXE)
	@mv $(OBJ) $(DIR)

$(DIR):
	@mkdir -p $(DIR)

.PHONY: clean fclean re

clean:
	$(RM) $(DIR)

fclean: clean
	$(RM) $(EXE)

re: fclean all
