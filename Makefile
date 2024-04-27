# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 19:15:36 by ibouram           #+#    #+#              #
#    Updated: 2024/04/27 11:52:42 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = push_swap.c utils.c parcing.c ft_split.c lst_fun.c mini_algo.c big_algo.c sa_sb_ss.c ra_rb_rr.c rra_rrb_rrr.c pa_pb.c
NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all