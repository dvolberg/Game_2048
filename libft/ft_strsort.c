/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/11/19 04:15:20 by dvolberg          #+#    #+#             */
/*   Updated: 2015/02/18 13:13:46 by dvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_strsort(char *str)
{
	int		save_i;
	int		i;

	save_i = 0;
	if (str)
	{
		while (str[save_i])
		{
			i = save_i + 1;
			while (str[i])
			{
				if (str[i] < str[save_i])
					ft_swap(&str[save_i], &str[i]);
				i++;
			}
			save_i++;
		}
	}
}
