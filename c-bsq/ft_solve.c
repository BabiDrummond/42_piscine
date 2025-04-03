/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_solve.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 04:55:04 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/02 22:25:50 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"
#include <stdio.h>

t_sol	solve(int **map, t_bsq bsq, t_sol sol)
{
	int	x;
	int	y;

	x = 1;
	while (x < bsq.rows)
	{
		y = 1;
		while (y < bsq.cols)
		{
			if (map[x][y] != -1)
			{
				map[x][y] = check_square_size(map, x, y);
				if (map[x][y] > sol.number)
				{
					sol.number = map[x][y];
					sol.x = x;
					sol.y = y;
				}
			}
			y++;
		}
		x++;
	}
	return (sol);
}
