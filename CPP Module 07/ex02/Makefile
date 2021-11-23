# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/07 20:38:49 by cshells           #+#    #+#              #
#    Updated: 2021/09/08 02:44:28 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start1

SRC = main.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror -std=c++98

RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBJ) *.hpp
	$(CXX) $(CXXFLAGS) $(SRC) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: clean fclean re
