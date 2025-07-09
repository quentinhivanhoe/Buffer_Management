SRC			=	$(shell find ../src/ -name "*.c" ! -name "main.c")
TESTS_SRC	=	$(shell find ./src/ -name "*.c")
GCDA		=	$(shell find . -name "*.gcda")
GCNO		=	$(shell find . -name "*.gcno")
CRITERION	= 	--coverage -lcriterion
TEST_EXE	=	unit_test
RM			=	rm -rf



all: $(TEST_EXE)
	gcovr --branches

$(TEST_EXE):
	$(CC) $(SRC) $(TESTS_SRC) $(CRITERION) -o $(TEST_EXE)

.PHONY: clean fclean

clean:
	$(RM) $(GCDA)
	$(RM) $(GCNO)

fclean: clean
	$(RM) $(TEST_EXE)

re: fclean all
