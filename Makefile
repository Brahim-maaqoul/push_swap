# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/12/29 19:51:39 by bmaaqoul          #+#    #+#              #
#    Updated: 2022/02/14 23:07:44 by bmaaqoul         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME1 = push_swap
NAME2 = checker

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRCS1 = swap_a.c swap_b.c ss.c rotate_a.c rotate_b.c rr.c rev_rotate_a.c \
		rev_rotate_b.c rrr.c push_a.c push_b.c algo_3.c algo_5.c algo_10.c \
		algo_100.c algo_500.c free_list.c free_tab.c ft_atoi.c ft_check_sorted.c \
		ft_duplicate.c ft_isdigit.c ft_lstadd_back.c ft_lstadd_front.c ft_lstlast.c \
		ft_lstnew.c ft_lstsize.c ft_putstr.c ft_split.c ft_strdup.c ft_strjoin.c \
		ft_strlen.c ft_substr.c get_big.c get_pos.c get_small.c check_args.c list_to_tab.c \
		put_err.c sort_all.c stack_aloc.c take_args.c push_parts.c push_swap.c ft_strcmp.c

SRCS2 = swap_a.c swap_b.c ss.c rotate_a.c rotate_b.c rr.c rev_rotate_a.c \
		rev_rotate_b.c rrr.c push_a.c push_b.c ft_strcmp.c free_list.c \
		ft_putstr.c stack_aloc.c take_args.c get_next_line.c ft_join.c \
		ft_strchr.c ft_lstnew.c ft_atoi.c ft_lstadd_back.c free_tab.c \
		ft_duplicate.c put_err.c ft_isdigit.c ft_split.c ft_strjoin.c \
		ft_substr.c ft_strlen.c ft_strdup.c ft_check_sorted.c \
		ft_lstadd_front.c ft_lstlast.c checker.c check_args.c

OBJS1 = $(SRCS1:.c=.o)
OBJS2 = $(SRCS2:.c=.o)


%.o: %.c push_swap.h
	$(CC) $(CFLAGS) -c $< -o $@
all: $(NAME1) $(NAME2) 

$(NAME1): $(OBJS1)
	$(CC) $(CFLAGS) -o $@ $^
$(NAME2): $(OBJS2)
	$(CC) $(CFLAGS) -o $@ $^

clean:
	rm -rf $(OBJS1) $(OBJS2)

fclean: clean
	rm -rf $(NAME1) $(NAME2)

re: fclean all