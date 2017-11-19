# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dskrypny <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/19 15:39:00 by dskrypny          #+#    #+#              #
#    Updated: 2017/11/19 17:26:55 by dskrypny         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SOURCE = ft_*.c

NAME = libft.a

FLAGS = -Wall -Werror -Wextra

all: $(NAME)

$(NAME):
	gcc -c $(FLAGS)  $(SOURCE)
	ar rcs $(NAME) *.o
	ranlib $(NAME)

clean:
	 rm -rf *.o

fclean: clean
	rm -rf $(NAME)

re: fclean all
