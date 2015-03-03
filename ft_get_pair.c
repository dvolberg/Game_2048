/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_pair.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <dvolberg@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/03/01 19:07:51 by dvolberg          #+#    #+#             */
/*   Updated: 2015/03/03 06:27:28 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "game.h"

int		ft_get_pair(int val)
{
	int		i;
	int		ret;

	i = 2;
	ret = 31;
	if (val == EMPTY)
		return (COLOR_EMPTY);
	while (i < 100000)
	{
		if (i == val)
			return (ret);
		i *= 2;
		ret++;
	}
	return (0);
}
