# Color Definitions
RED     := \033[0;31m
GREEN   := \033[0;32m
YELLOW  := \033[0;33m
RESET   := \033[0m

CXX := c++

CXXFLAGS := -Wall -Wextra -Werror -std=c++98

SHADOWFLAGS := -Wshadow

RM := rm -rf

NAME := diamondtrap

VAL := valgrind --leak-check=full --track-origins=yes

SRC := main.cpp ClapTrap.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp

INC := ClapTrap.hpp ScavTrap.hpp FragTrap.hpp DiamondTrap.hpp

OBJ := $(SRC:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJ)
	@printf "$(GREEN)  Linking $(NAME)...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)
	@printf "$(GREEN)  Successfully built $(NAME)$(RESET)\n"

%.o: %.cpp $(INC)
	@printf "$(YELLOW)  Compiling $<...$(RESET)\n"
	@$(CXX) $(CXXFLAGS) -c $< -o $@

valgrind: $(NAME)
	@printf "$(GREEN)  Execute with VALGRIND$(RESET)\n"
	@$(VAL) ./$(NAME)
	@make clean

shadow:
	@printf "$(GREEN)  Building with shadow warnings...$(RESET)\n"
	@$(MAKE) CXXFLAGS="$(CXXFLAGS) $(SHADOWFLAGS)" --no-print-directory

clean:
	@printf "$(RED)  Cleaning object files...$(RESET)\n"
	@$(RM) $(OBJ)
	@printf "$(GREEN)  Object files removed$(RESET)\n"

fclean: clean
	@printf "$(RED)  Removing executable...$(RESET)\n"
	@$(RM) $(NAME)
	@printf "$(GREEN)  Executable file removed$(RESET)\n"

re: fclean all
	@printf "$(YELLOW)  Rebuilding project...$(RESET)\n"

.PHONY: all clean fclean re
