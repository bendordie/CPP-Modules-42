# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cshells <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/06/30 04:37:42 by cshells           #+#    #+#              #
#    Updated: 2021/09/11 21:33:06 by cshells          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = myphonebook

SRC = Contact.cpp \
	  Phonebook.cpp \
	  main.cpp

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
