# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: icastell <icastell@student.42madrid.com>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/08/26 18:22:32 by icastell          #+#    #+#              #
#    Updated: 2022/08/28 10:00:04 by icastell         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		=	ScavTrap
CXX			=	clang++
CXXFLAGS	=	-Wall -Werror -Wextra -std=c++98 -pedantic
SRCS		=	main.cpp\
				ClapTrap.cpp\
				ScavTrap.cpp\
				
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