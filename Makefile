# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 19:15:36 by ibouram           #+#    #+#              #
#    Updated: 2024/04/27 18:39:11 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = mandatory/push_swap.c mandatory/utils.c mandatory/parcing.c mandatory/ft_split.c mandatory/lst_fun.c mandatory/mini_algo.c mandatory/big_algo.c mandatory/sa_sb_ss.c mandatory/ra_rb_rr.c mandatory/rra_rrb_rrr.c mandatory/pa_pb.c
NAME = push_swap

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

OBJS = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c mandatory/push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all