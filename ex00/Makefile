# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 13:46:07 by icastell          #+#    #+#              #
#    Updated: 2022/08/26 13:46:45 by icastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ClapTrap
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS		=	main.cpp\
				ClapTrap.cpp\

OBJS		:=	$(SRCS:.cpp=.o)

all:	$(NAME)

$(NAME)	:	$(OBJS)

	$(CXX) $(CXXFLAGS) $(SRCS) -o $(NAME)

clean:
			rm -f $(OBJS)

fclean:		clean
			rm -rf $(NAME)

re:		fclean all

.PHONY:	all clean fclean re