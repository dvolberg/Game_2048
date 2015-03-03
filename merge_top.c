/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   merge_top.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 00:27:09 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/01 21:17:57 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int					**merge_top(t_env *env)
{
	int				i;
	int				j;

	j = -1;
	while (++j < SIZE)
	{
		i = -1;
		while (++i < SIZE - 1)
		{
			if (env->tab[i][j] != EMPTY && env->tab[i + 1][j] == env->tab[i][j])
			{
				env->tab[i][j] *= 2;
				env->score += env->tab[i][j];
				env->tab[i + 1][j] = EMPTY;
				env->pop = 1;
			}
		}
	}
	return (env->tab);
}
