# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 19:51:39 by bmaaqoul          #+#    #+#              #
#    Updated: 2021/12/29 20:18:45 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap.a
AR = ar rc
CC = cc
CFLAGS = -Wall -Wextra -Werror
HDR = push_swap.h
SRCS = swap_a.c \

OBJS = $(SRCS:%.c=%.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(NAME) $(OBJS)

$(OBJS): $(SRCS) $(HDR)
	$(CC) $(CFLAGS) -c $(SRCS)

clean:
	rm -rf $(OBJS)

fclean: clean
	rm -rf $(NAME)

re: fclean all