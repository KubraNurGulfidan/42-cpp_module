Name = bsp
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
SRC = main.cpp Fixed.cpp

all: $(Name)

$(Name):
	@$(CXX) $(CXXFLAGS) $(SRC) -o $(Name)

clean:
	@rm -rf $(Name)

fclean: clean

re: fclean all

.PHONY: all clean fclean re