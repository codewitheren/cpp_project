# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: muerdoga <muerdoga@student.42kocaeli.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/06/21 20:01:51 by muerdoga          #+#    #+#              #
#    Updated: 2023/07/03 13:10:35 by muerdoga         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= File
	
CC		= c++
FLAGS	= -Wall -Wextra -Werror -std=c++98
RM		= rm -rf
OBJS	= $(SRCS:.cpp=.o)
SRCS	= ./main.cpp \
		  ./File.cpp

RED 		=	\e[91m
GREEN		=	\e[92;5;118m
YELLOW		=	\e[93;5;226m
RESET		=	\e[0m

%.o: %.cpp
	@c++ -c $(FLAGS) $< -o $@
	
.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJS)
	@printf "$(YELLOW) $(NAME) $(RESET)\n"
	@ $(CC) $(FLAGS) -o $(NAME) $(OBJS)
	@printf "$(GREEN) Ready\n$(RESET)"

clean:
	@$(RM) $(OBJS)
	@printf "$(RED) Removed$(RESET)\n"

fclean: clean
	@$(RM) $(NAME)
re: fclean all