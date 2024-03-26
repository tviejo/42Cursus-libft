# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tviejo <tviejo@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/03/26 18:53:05 by tviejo            #+#    #+#              #
#    Updated: 2024/03/26 19:26:20 by tviejo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRC_DIR		=	./srcs/
    
SRC        =	ft_strlen.c  ft_toupper.c	ft_tolower.c    \
		ft_strrchr.c  ft_strnstr.c   ft_strncmp.c   \
		ft_strlcpy.c	ft_strlcat.c	\
		ft_strchr.c \
		ft_memset.c  ft_memmove.c   ft_memcpy.c    ft_memcmp.c     \
		ft_memchr.c	ft_isprint.c ft_isdigit.c   ft_isascii.c   \
		ft_isalpha.c    ft_isalnum.c

SRCS		=	${addprefix ${SRC_DIR}, ${SRC}}

OBJS		=	${SRCS:.c=.o}

HEAD		=	./includes/

CC		=	gcc

CFLAGS		=	-Wall -Wextra -Werror

AR		=	ar rc

RM		=	rm -f

.c.o:
			${CC} ${CFLAGS} -c -I ${HEAD} $< -o $@

${NAME}:		${OBJS}
				${AR} ${NAME} ${OBJS}

all:			${NAME}

clean:
				${RM} ${OBJS}

fclean:			clean
				${RM} ${NAME}

re:				fclean all

.PHONY:			all clean fclean re
