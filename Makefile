NAME = push_swap

	CC = cc CFLAGS = -Wall - Wextra -
	Werror

		SRCS = Utils.c main.c parsing_flag.c parsing_numbers.c printerror.c stack.c ft_split.c

							OBJS = $(SRCS
									:.c =.o)

									all : $(NAME)

												$(NAME)
	: $(OBJS) $(CC) $(CFLAGS) $(OBJS) -
		o $(NAME)

			clean : rm -
					f $(OBJS)

						fclean : clean rm -
								f $(NAME)

									re : fclean all

											.PHONY : all clean fclean re
