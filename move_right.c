/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_right.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:27:09 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/03 06:27:29 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int					**move_right(t_env *env)
{
	int				i;
	int				j;
	int				k;

	i = -1;
	while (++i < SIZE)
	{
		j = SIZE - 1;
		while (--j >= 0)
		{
			k = 0;
			while (env->tab[i][j] != EMPTY && env->tab[i][j + k + 1] == EMPTY)
				k++;
			if (k)
			{
				env->pop = k;
				env->tab[i][j + k] = env->tab[i][j];
				env->tab[i][j] = EMPTY;
			}
		}
	}
	return (env->tab);
}
