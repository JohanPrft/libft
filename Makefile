# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jprofit <jprofit@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/11/15 10:10:32 by jprofit           #+#    #+#              #
#    Updated: 2022/11/21 15:25:58 by jprofit          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# **************************************************************************** #
# ARGUMENTS

NAME	= libft.a

CC		= cc

FLAGS	= -Wall -Wextra -Werror

SRCS	=	ft_isalpha.c	ft_isdigit.c	ft_isalnum.c	ft_isascii.c	\
			ft_isprint.c	ft_strlen.c		ft_memset.c		ft_bzero.c		\
			ft_memcpy.c		ft_memmove.c	ft_strlcpy.c	ft_strlcat.c	\
			ft_toupper.c	ft_tolower.c	ft_strchr.c		ft_strrchr.c	\
			ft_strncmp.c	ft_memchr.c		ft_memcmp.c		ft_strnstr.c	\
			ft_atoi.c		ft_calloc.c		ft_strdup.c		ft_substr.c		\
			ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c		\
			ft_strmapi.c	ft_striteri.c	ft_putchar_fd.c	ft_putstr_fd.c	\
			ft_putendl_fd.c	ft_putnbr_fd.c

SRCSBNS	= 	ft_lstnew.c		ft_lstadd_front.c	ft_lstadd_front.c			\
			ft_lstsize.c	ft_lstlast.c		ft_lstadd_back.c			\
			ft_lstdelone.c	ft_lstclear.c		ft_lstiter.c				\
			ft_lstmap.c

OBJDIR	=	objdir

OBJS	=	$(SRCS:%.c=%.o)

OBJSBNS	=	$(SRCSBNS:%.c=%.o)

HEADER	=	libft.h

# **************************************************************************** #
# RULES

all: 			${NAME}

bonus:			${OBJSBNS}
				ar rcs ${NAME} $^

${NAME}:		${OBJS}
				ar rcs $@ $^

${OBJDIR}:
				mkdir -p ${OBJDIR}

%.o:	%.c ${HEADER} Makefile
				${CC} ${FLAGS} -c $< -o $@

clean:
				rm ${OBJS}

fclean:			clean
				rm ${NAME}

bclean:
				rm ${OBJSBNS}

re:				clean all

.PHONY:			all bonus clean fclean re
