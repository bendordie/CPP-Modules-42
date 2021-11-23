# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/18 16:28:40 by cshells           #+#    #+#              #
#    Updated: 2021/08/19 16:41:37 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start

SRC = main.cpp \
	  ClapTrap.cpp \
	  DiamondTrap.cpp \
	  FragTrap.cpp \
	  ScavTrap.cpp

OBJ = $(SRC:.cpp=.o)

HEADER = *.hpp

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBJ) $(HEADER)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
