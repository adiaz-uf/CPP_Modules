NAME = megaphone

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98 

GREEN=\033[1;32m

SRC	= megaphone.cpp

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(SRC) -o $(NAME)
	@echo "\n$(GREEN)¡Compilation Success, you can run Megaphone!\n"

all: $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)
re: fclean all

.PHONY: all clean fclean re