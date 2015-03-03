/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gbadi <gbadi@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/12/10 01:32:34 by gbadi             #+#    #+#             */
/*   Updated: 2015/03/01 21:34:04 by gbadi            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"

# define BUFF_SIZE			4096
# define FT_SWAP(x, y, z) 	{z = x; x = y; if (z != x) {free(z);}}

typedef struct				s_buff
{
	int						read;
	int						last_line;
	char					*buff;
	int						len;
}							t_buff;

int							get_next_line(int const fd, char **line);

#endif
