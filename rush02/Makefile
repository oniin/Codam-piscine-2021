NAME = rush-02
OBJFILES = dcsrushtest.o
FLAGS = -Wall -Wextra -Werror

$(NAME): $(OBJFILES)
	gcc -o $@ $^

%.o: %.c
	gcc -c $(FLAGS) -o $@ $^

clean:
	rm -f $(NAME)

fclean: clean
	rm -f $(OBJFILES) *.out

re: fclean $(NAME)

.PHONY: clean