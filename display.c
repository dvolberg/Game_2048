/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   display.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/27 22:20:56 by bsautron          #+#    #+#             */
/*   Updated: 2015/03/03 03:49:50 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void	ft_print_ascii(int y, int x, int val)
{
	if (ft_strcmp(ft_itoa(val), "2") == 0)
		print_2(y, x);
	else if (ft_strcmp(ft_itoa(val), "4") == 0)
		print_4(y, x);
	else if (ft_strcmp(ft_itoa(val), "8") == 0)
		print_8(y, x);
	else if (ft_strcmp(ft_itoa(val), "16") == 0)
		ascii_16(y, x);
	else if (ft_strcmp(ft_itoa(val), "32") == 0)
		ascii_32(y, x);
	else if (ft_strcmp(ft_itoa(val), "64") == 0)
		ascii_64(y, x);
	else if (ft_strcmp(ft_itoa(val), "128") == 0)
		ascii_128(y, x);
	else if (ft_strcmp(ft_itoa(val), "256") == 0)
		ascii_256(y, x);
	else if (ft_strcmp(ft_itoa(val), "512") == 0)
		ascii_512(y, x);
	else if (ft_strcmp(ft_itoa(val), "1024") == 0)
		ascii_1024(y, x);
	else if (ft_strcmp(ft_itoa(val), "2048") == 0)
		ascii_2048(y, x);
}

void	ft_putnbr_to_grid(int y_max, int x_max, int **tab)
{
	int		x;
	int		y;
	int		i;
	int		j;

	i = 0;
	y = (y_max / SIZE) / 2;
	while (i < SIZE)
	{
		j = 0;
		x = (x_max / SIZE) / 2;
		while (j < SIZE)
		{
			if (tab[i][j] != 3)
			{
				if (y_max >= 40 || x_max >= 40)
				{
					if (!ft_print_tout(tab[i][j], x, y))
						ft_print_ascii(y, x, tab[i][j]);
				}
				else
				{
					mvprintw(1, 1, "Serieusement !!");
					endwin();
					exit(-1);
				}
			}
			x += (x_max / SIZE);
			j++;
		}
		i++;
		y += (y_max / SIZE);
	}
}
