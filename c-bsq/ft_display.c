/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 12:24:05 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/02 22:19:05 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	diplay(t_bsq bsq)
{
	int	x;
	int	y;

	x = 0;
	while (x++ < bsq.rows)
	{
		y = 0;
		while (y++ < bsq.cols)
			write(1, &bsq.map_file[x][y], 1);
		write(1, "\n", 1);
	}
}
