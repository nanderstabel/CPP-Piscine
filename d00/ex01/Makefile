# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nstabel <nstabel@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/14 10:13:20 by nstabel       #+#    #+#                  #
#    Updated: 2021/01/14 10:15:10 by nstabel       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = phonebook

CC = clang++

CFLAGS = -Wall -Wextra -Werror -I. -g

SRCS = main.cpp Contact.cpp Phonebook.cpp

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(CFLAGS) -o $(NAME) $(OBJS)

clean:
	rm -fv $(OBJS)

fclean: clean
	rm -fv $(NAME)

re:
	$(MAKE) fclean
	$(MAKE) all

.PHONY: all clean fclean re
