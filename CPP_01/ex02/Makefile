# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: arch <arch@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/12/20 11:37:18 by arch              #+#    #+#              #
#    Updated: 2024/12/26 13:58:25 by arch             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
FLAGS = -Wall -Wextra -Werror
EXTRA = -Wall -Wextra -Werror -std=c++98

SRC = main.cpp
OBJ = $(SRC:.cpp=.o)
TEST_OBJ = $(SRC:.cpp=.test.o)

NAME = ex02

all: $(NAME)

$(NAME): $(OBJ)
	$(CC) $(FLAGS) $(OBJ) -o $(NAME)

%.o: %.cpp
	$(CC) $(FLAGS) -c $< -o $@

$(NAME)_test: $(TEST_OBJ)
	$(CC) $(EXTRA) $(TEST_OBJ) -o $(NAME)_test

%.test.o: %.cpp
	$(CC) $(EXTRA) -c $< -o $@

test: $(NAME)_test

clean:
	rm -rf $(OBJ) $(TEST_OBJ)

fclean: clean
	rm -f $(NAME) $(NAME)_test

re: fclean all

.PHONY: all clean fclean re test


