NAME = ex02

CC = c++
RM = rm -rf
CFLAGS = -Wall -Werror -Wextra -std=c++98 -fsanitize=leak

#directories
SRC_DIR		=	src/
OBJ_DIR		=	.obj/
INC_DIR		=	include/

#color codes
GREEN = \033[1;32m
END = \033[0m

#source files
SRCS =  main.cpp \
		Bureaucrat.cpp \
		AForm.cpp \
		ShrubberyCreationForm.cpp \
		RobotomyRequestForm.cpp \
		PresidentialPardonForm.cpp \

OBJS = $(SRCS:.cpp=.o)

#paths
SRC			=	$(addprefix $(SRC_DIR), $(SRCS))
OBJ			=	$(addprefix $(OBJ_DIR), $(OBJS))

all: $(NAME)

#executable compilation
$(NAME): $(OBJ)
	@$(CC) $(CFLAGS) $(OBJ) -o $(NAME) 
	@echo "\n$(GREEN)¡Compilation Success, you can run ex02!$(END)\n"

#objs compilation
$(OBJ_DIR)%.o:$(SRC_DIR)%.cpp
	@mkdir -p $(OBJ_DIR)
	$(CC) $(CFLAGS) -I $(INC_DIR) -o $@ -c $<

clean:
	@$(RM) $(OBJ_DIR)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

run: $(NAME)
	@./$(NAME)
	
.PHONY: all clean fclean re run