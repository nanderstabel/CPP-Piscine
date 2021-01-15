# **************************************************************************** #
#                                                                              #
#                                                         ::::::::             #
#    Makefile                                           :+:    :+:             #
#                                                      +:+                     #
#    By: nstabel <nstabel@student.codam.nl>           +#+                      #
#                                                    +#+                       #
#    Created: 2021/01/12 14:08:13 by nstabel       #+#    #+#                  #
#    Updated: 2021/01/13 18:01:40 by nstabel       ########   odam.nl          #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = clang++

CFLAGS = -Wall -Wextra -Werror -g

SRCS = megaphone.cpp

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
