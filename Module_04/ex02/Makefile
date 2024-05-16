NAME =  ex02

CC = c++
RM = rm -rf
CFLAGS = -Wall -Wextra -Werror -std=c++98 -fsanitize=address
INCLUDE = -I./includes

GREEN=\033[1;32m

SRC	= main.cpp \
	srcs/AAnimal.cpp\
	srcs/Dog.cpp\
	srcs/Cat.cpp\
	srcs/WrongAnimal.cpp\
	srcs/WrongCat.cpp\
	srcs/Brain.cpp\

OBJS = $(SRC:.cpp=.o)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) $(OBJS) -o $(NAME) 
	@echo "\n$(GREEN)¡Compilation Success, you can run ex02!\n"

all: $(NAME) $(OBJS)

%.o: %.cpp
	$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@ 

clean:
	@$(RM) $(OBJS)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re