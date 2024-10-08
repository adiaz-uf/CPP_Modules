NAME = ex00

CC = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=address
INCLUDE = -I./include/

GREEN = \033[1;32m
END = \033[0m

SRCS = main.cpp \
		src/Bureaucrat.cpp

OBJS = $(SRCS:.cpp=.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 
	@echo "\n$(GREEN)¡Compilation Success, you can run ex00!$(END)\n"

all: $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

run: $(NAME)
	@./$(NAME)
	
.PHONY: all clean fclean re run