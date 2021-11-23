# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/07 22:30:55 by cshells           #+#    #+#              #
#    Updated: 2021/08/07 22:37:15 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start

SRC = main.cpp \
	  Zombie.cpp \
	  newZombie.cpp \
	  randomChump.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all:	$(NAME)

$(NAME): $(SRC) $(OBJ) *.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
