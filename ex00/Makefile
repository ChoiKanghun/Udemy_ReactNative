SRCS		=	megaphone.cpp
OBJS		=	$(SRCS:.cpp=.o)

COMPILER	=	clang++
RM		=	rm -rf
COMPILE_FLAG	=	-Wall -Werror -Wextra -I./

NAME		=	megaphone

all:		$(NAME)

$(NAME):	$(OBJS)
			$(COMPILER) $(COMPILE_FLAG) -o $(NAME) $(OBJS)

clean:
			$(RM) $(OBJS)

fclean:		clean
			$(RM) $(NAME)

re:		fclean $(NAME)

test:		$(NAME)
			./megaphone "shhhhh... I think the students are asleep..."
			./megaphone Damnit " ! " "Sorry students, I thought this things was off."
			./megaphone
.PHONY:		all clean fclean re test
