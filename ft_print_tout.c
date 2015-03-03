/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tout.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 23:35:42 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/03 06:27:28 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		ft_print_tout(int val, int x, int y)
{
	int		h;
	int		w;

	getmaxyx(stdscr, h, w);
	if (h <= 35 || (w / SIZE <= 34))
	{
		attron(COLOR_PAIR(ft_get_pair(val)));
		mvprintw(y, x - ft_intlen(val) / 2 + 1, ft_itoa(val));
		attroff(COLOR_PAIR(ft_get_pair(val)));
		return (1);
	}
	return (0);
}
