/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   input.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/28 03:42:10 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/02 19:17:48 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

static void			exec(t_env *env, int **(a)(t_env *), int **(b)(t_env *))
{
	env->tab = a(env);
	env->tab = b(env);
	env->tab = a(env);
}

int					**ft_keytrigger(int key_press, t_env *env)
{
	env->pop = 0;
	if (key_press == 27)
	{
		endwin();
		exit(-1);
	}
	if (key_press == KEY_UP)
		exec(env, &move_top, &merge_top);
	else if (key_press == KEY_DOWN)
		exec(env, &move_bottom, &merge_bottom);
	else if (key_press == KEY_LEFT)
		exec(env, &move_left, &merge_left);
	else if (key_press == KEY_RIGHT)
		exec(env, &move_right, &merge_right);
	if (env->pop)
	{
		clear();
		env->tab = fill_tab(env);
		ft_draw_grid(env->tab);
	}
	return (env->tab);
}
