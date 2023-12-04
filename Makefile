# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/05/04 11:03:43 by oseivane          #+#    #+#              #
#    Updated: 2023/12/04 12:51:11 by oseivane         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = push_swap

SORTING_DIR = sorting/

SRC_DIR = src/

OBJ_DIR = obj/

LIB_DIR = libraries/libft

FT_PRINTF_DIR = libraries/ft_printf

INCLUDES_DIR = ./includes/*.h

INCLUDES = -I./includes

INCLUDES_LIB = -I./$(LIB_DIR)

INCLUDES_LIB_PRINTF = -I./$(FT_PRINTF_DIR)

LIB = -L./$(LIB_DIR) -lft

LIB_PRINTF = -L./$(FT_PRINTF_DIR) -lftprintf

CFLAGS = -Werror -Wall -Wextra

OBJF = .cache_exists

SRC = 	push_swap \
		ft_process \
		ft_add_node_back \
		ft_add_node_front \
		ft_display_info \
		ft_last_node \
		ft_first_node \
		ft_free \
		ft_new_node \
		ft_check_error \
		ft_rotate_type \
		ft_rotate_and_push \
		calc_ba \
		calc_ab \
		ft_swap \
		ft_push \
		ft_rotate \
		ft_reverse \
		ft_utils \
		ft_utils2 \
		$(SORTING_DIR)ft_sorted \
		$(SORTING_DIR)ft_sort_3 \
		$(SORTING_DIR)ft_sort_big \

SOURCES = $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC)))

OBJECTS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))

all: libraries $(NAME)

$(NAME):	$(OBJECTS)
		gcc $(CFLAGS) $(OBJECTS) $(INCLUDES) $(INCLUDES_LIB) $(LIB) $(INCLUDES_LIB_PRINTF) $(LIB_PRINTF) -o $(NAME)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(INCLUDES_DIR) | $(OBJF) 
			gcc $(CFLAGS) $(INCLUDES) $(INCLUDES_LIB) $(INCLUDES_LIB_PRINTF) -c $< -o $@
$(OBJF):
		@mkdir -p $(OBJ_DIR)
clean:
			rm -f $(OBJECTS)
	
fclean:		clean
			rm -f $(NAME)
			make -C $(LIB_DIR) fclean
			make -C $(FT_PRINTF_DIR) fclean

re:			fclean all

libraries:
			make -C $(LIB_DIR)
			make -C $(FT_PRINTF_DIR)

.PHONY:		all bonus clean fclean re libraries