/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_bottom.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:27:09 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/03 06:29:56 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int					**move_bottom(t_env *env)
{
	int				i;
	int				j;
	int				k;

	j = -1;
	while (++j < SIZE)
	{
		i = SIZE - 1;
		while (--i >= 0)
		{
			k = 0;
			while (i + k + 1 < SIZE
				&& env->tab[i][j] != EMPTY && env->tab[i + k + 1][j] == EMPTY)
				k++;
			if (k)
			{
				env->pop = k;
				env->tab[i + k][j] = env->tab[i][j];
				env->tab[i][j] = EMPTY;
			}
		}
	}
	return (env->tab);
}
