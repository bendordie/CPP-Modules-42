# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/08/11 18:23:29 by cshells           #+#    #+#              #
#    Updated: 2021/08/11 18:25:57 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = karenFilter

SRC = main.cpp \
	  Karen.cpp

OBJ = $(SRC:.cpp=.o)

CXX = clang++

CXXFLAGS = -Wall -Wextra -Werror

RM = rm -rf

all: $(NAME)

$(NAME): $(SRC) $(OBJ) *.hpp
	$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean:
	$(RM) $(OBJ)

fclean: clean
	$(RM) $(NAME)

re: fclean $(NAME)

.PHONY: all clean fclean re
