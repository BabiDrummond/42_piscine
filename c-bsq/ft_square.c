/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_square.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 08:55:26 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/02 22:18:14 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	check_square_size(int **map, int x, int y)
{
	int	min;

	min = map[x - 1][y - 1];
	if (map[x - 1][y] < min)
		min = map[x - 1][y];
	if (map[x][y - 1] < min)
		min = map[x][y - 1];
	return (min + 1);
}

t_bsq	draw_square(t_sol sol, t_bsq bsq)
{
	int	x;
	int	y;
	int	count_x;
	int	count_y;

	x = sol.x;
	count_x = 0;
	while (count_x++ <= sol.number)
	{
		y = sol.y;
		count_y = 0;
		while (count_y++ <= sol.number)
		{
			bsq.map_file[x][y--] = bsq.full;
		}
		x--;
	}
	return (bsq);
}
