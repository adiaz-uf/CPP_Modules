NAME = phonebook

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98
INCLUDE = -I./include

GREEN=\033[1;32m

SRC	= srcs/main.cpp \
	srcs/PhoneBook.cpp \
	srcs/Contact.cpp \

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(SRC) $(INCLUDE) -o $(NAME)
	@echo "\n$(GREEN)¡Compilation Success, you can run Ponebook!\n"

all: $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re