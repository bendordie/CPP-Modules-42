# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/06 21:14:00 by cshells           #+#    #+#              #
#    Updated: 2021/08/07 20:04:00 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = start

SRC = Account.cpp \
	  tests.cpp

OBJ = $(SRC:.cpp=.o)

TAGS = -Wall -Wextra -Werror

CXX = clang++

RM = rm -rf

all:	$(NAME)

$(NAME): $(SRC) $(OBJ) *.hpp
	$(CXX) $(TAGS) $(OBJ) -o $(NAME)

clean: 
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
