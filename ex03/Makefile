# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/28 10:57:06 by icastell          #+#    #+#              #
#    Updated: 2022/08/29 11:30:10 by icastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	DiamondTrap
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -Wshadow -std=c++98 -pedantic
SRCS		=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				FragTrap.cpp\
				DiamondTrap.cpp\
				
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