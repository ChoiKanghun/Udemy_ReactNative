SRCS		=	main.cpp 
OBJS		=	$(SRCS:.cpp=.o)

COMPILER	=	clang++
RM		=	rm -rf
COMPILE_FLAG	=	-std=c++98 -Wall -Werror -Wextra -I./

NAME		=	array

all:		$(NAME)

$(NAME):	$(OBJS)
			$(COMPILER) $(COMPILE_FLAG) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

.PHONY:		all clean fclean re test
