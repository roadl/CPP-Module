# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yojin <yojin@student.42.fr>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/02/12 17:18:23 by yojin             #+#    #+#              #
#    Updated: 2025/01/22 17:35:24 by yojin            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = c++
CFLAGS = -Wall -Wextra -Werror
LDIR = ./
HEADER = PhoneBook.hpp Contact.hpp
SRCS = PhoneBook.cpp Contact.cpp main.cpp
NAME = phonebook

all: $(NAME)

$(NAME): $(SRCS)
	$(CC) $(CFLAGS) $^ -o $@ -I$(LDIR)

re: fclean all

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

.PHONY: all re clean fclean
