# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/09/06 23:27:10 by cshells           #+#    #+#              #
#    Updated: 2021/09/06 23:29:48 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start

SRC = main.cpp

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

.PHONY: clean fclean re
