# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/22 16:29:24 by irychkov          #+#    #+#              #
#    Updated: 2024/04/24 12:33:14 by irychkov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC			= ./ft_atoi.c ./ft_bzero.c ./ft_calloc.c ./ft_isalnum.c \
			./ft_isalpha.c ./ft_isascii.c ./ft_isdigit.c ./ft_isprint.c \
			./ft_itoa.c ./ft_memchr.c ./ft_memcmp.c ./ft_memcpy.c \
			./ft_memmove.c ./ft_memset.c ./ft_putchar_fd.c ./ft_putendl_fd.c \
			./ft_putnbr_fd.c ./ft_putstr_fd.c ./ft_split.c ./ft_strchr.c \
			./ft_strdup.c ./ft_striteri.c ./ft_strjoin.c ./ft_strlcat.c \
			./ft_strlcpy.c ./ft_strlen.c ./ft_strmapi.c ./ft_strncmp.c \
			./ft_strnstr.c ./ft_strrchr.c ./ft_strtrim.c ./ft_substr.c \
			./ft_tolower.c ./ft_toupper.c

BONUS_SRCS 	= ./ft_lstadd_back.c ./ft_lstadd_front.c ./ft_lstclear.c \
			./ft_lstdelone.c ./ft_lstiter.c ./ft_lstlast.c ./ft_lstmap.c \
			./ft_lstnew.c ./ft_lstsize.c

OBJS		= $(SRC:.c=.o)

BONUS_OBJS 	= $(BONUS_SRCS:.c=.o)

HEAD		= ./libft.h

NAME		= libft.a

AR			= ar rcs

CC			= cc

CFLAGS		= -Wall -Wextra -Werror

all:		$(NAME)

.c.o:	
			$(CC) $(CFLAGS) -c -I $(HEAD) $< -o $@

$(NAME):	$(OBJS)
			$(AR) $(NAME) $(OBJS)

$(NAME)($(BONUS_OBJS)):		$(OBJS) $(BONUS_OBJS)
			$(AR) $(NAME) $(OBJS) $(BONUS_OBJS)

bonus: $(NAME)($(BONUS_OBJS))

clean:	
			rm -f $(OBJS) $(BONUS_OBJS)

fclean:		clean
			rm -f $(NAME)

re:			fclean all

.PHONY:	all clean fclean re bonus