/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_right.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:27:09 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/03 06:27:30 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int					**merge_right(t_env *env)
{
	int				i;
	int				j;

	i = -1;
	while (++i < SIZE)
	{
		j = SIZE;
		while (--j > 0)
		{
			if (env->tab[i][j] != EMPTY && env->tab[i][j - 1] == env->tab[i][j])
			{
				env->tab[i][j] *= 2;
				env->score += env->tab[i][j];
				env->tab[i][j - 1] = EMPTY;
				env->pop = 1;
			}
		}
	}
	return (env->tab);
}
