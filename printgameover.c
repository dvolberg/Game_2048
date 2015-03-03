/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printgameover.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 23:41:12 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/01 23:42:40 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

void			gameover(int x)
{
	int			ch;

	ch = 0;
	wclear(stdscr);
	wrefresh(stdscr);
	while (1)
	{
		ch = getch();
		printgameover(x);
		if (ch == 'q' || ch == 'Q' || ch == 27 || ch == 10)
		{
			endwin();
			break ;
		}
		refresh();
	}
}
