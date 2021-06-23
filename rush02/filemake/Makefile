NAME := rush-02
HEADERFILES := src/ft_atoi.c
OBJFILES := obj/main.o obj/ft_atoi.o
LDFLAGS ?=
CFLAGS ?= -Wall -Wextra -Werror

$(NAME): $(OBJFILES)
	$(CC) $(LDFLAGS) -o $@ $^

obj/%.o: src/%.c $(HEADERFILES)
	mkdir -p $(dir $@)
	$(CC) -c $(CFLAGS) -o $@ $<

fclean:
	rm -f $(NAME) $(OBJFILES)

.PHONY: clean