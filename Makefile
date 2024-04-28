# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ibouram <ibouram@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/25 19:15:36 by ibouram           #+#    #+#              #
#    Updated: 2024/04/28 10:25:35 by ibouram          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = mandatory/push_swap.c mandatory/utils.c mandatory/parcing.c mandatory/ft_split.c mandatory/lst_fun.c mandatory/mini_algo.c mandatory/big_algo.c mandatory/sa_sb_ss.c mandatory/ra_rb_rr.c mandatory/rra_rrb_rrr.c mandatory/pa_pb.c
SRCB = bonus/checker.c bonus/checker_utils.c bonus/parcing.c bonus/ft_split.c  bonus/lst_fun.c bonus/instruction_1.c bonus/instruction_2 bonus/get_next_line.c bonus/get_next_line_utils.c
NAME = push_swap
B_NAME = checker

CC = cc
FLAGS = -Wall -Wextra -Werror
RM = rm -rf

OBJS = $(SRC:.c=.o)
OBJSB = $(SRCB:.c=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(FLAGS) $^ -o $@

bonus: $(OBJSB)

$(B_NAME): $(OBJSB)
	$(CC) $(FLAGS) $^ -o $@

%.o: %.c bonus/checker.h
	$(CC) $(FLAGS) -c $< -o $@

%.o: %.c mandatory/push_swap.h
	$(CC) $(FLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)
	$(RM) $(OBJSB)

fclean: clean
	$(RM) $(NAME)
	$(RM) $(B_NAME)

re: fclean all bonus