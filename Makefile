# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ebirbo <marvin@42.fr>                      +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2015/06/08 17:48:31 by ebirbo            #+#    #+#              #
#    Updated: 2015/06/10 12:29:30 by ebirbo           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

EXEC = wolf3d

NAME = lib.a

LIB = -framework OpenGL -framework AppKit  -L /nfs/zfs-student-5/users/2014/ebirbo/mlx

SRCC =	main.c\
		errors.c\
		draw_img.c\
		map.c\
		raycaster.c\
		minimap.c\
		raycasting_sub_functions.c\
		raycasting_colors.c\
		key_hooks.c\

SRCO = $(SRCC:%.c=%.o)

FLAG = -Wall -Werror -Wextra

.PHONY: all fast clean fclean

all: wolf3d

%.o: %.c
	@echo -n  $< :
	@gcc -o $@ -c $< $(FLAG)
	@echo

wolf3d: $(SRCO)
	@make -C libft
	@gcc -o $(EXEC) $(FLAG) $(SRCO) /nfs/zfs-student-5/users/2014/ebirbo/mlx/libmlx.a libft/libft.a $(LIB)

fast: $(SRCO)
	@gcc $(FLAG) -o $(EXEC) $(SRCO) libft/libft.a /nfs/zfs-student-5/users/2014/ebirbo/mlx/libmlx.a $(LIB)

clean:
	@make clean -C libft
	@rm -f $(SRCO)

fclean: clean
	@make fclean -C libft
	@rm -f $(SRCO) $(EXEC)

re: fclean all
	@make re -C libft
