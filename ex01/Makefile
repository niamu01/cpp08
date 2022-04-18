# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: yeju <yeju@student.42seoul.kr>             +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/18 21:33:57 by yeju              #+#    #+#              #
#    Updated: 2022/04/18 21:33:57 by yeju             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = ex01
CXX = c++
CXXFLAGS = -Wall -Wextra -Werror
C98 = -std=c++98
SRCS = main.cpp Span.cpp
OBJS = $(SRCS:.cpp=.o)

all : $(NAME)

clean :
		rm -rf $(OBJS)

fclean : clean
		rm -rf $(NAME)

re : fclean all

$(NAME) : $(SRCS)
		$(CXX) $(CXXFLAGS) $(C98) -c $(SRCS)
		$(CXX) $(CXXFLAGS) $(C98) $(OBJS) -o $(NAME)

.PHONY : all clean fclean re