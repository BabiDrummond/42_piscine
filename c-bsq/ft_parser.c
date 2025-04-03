/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parser.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 20:21:56 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/02 22:21:44 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

t_bsq	parse_map(char *buffer, int i)
{
	t_bsq	bsq;
	int		cols;

	cols = 0;
	bsq.rows = count_rows(buffer, i);
	bsq.empty = buffer[i - 3];
	bsq.obstacle = buffer[i - 2];
	bsq.full = buffer[i - 1];
	while (buffer[++i] != '\n')
		cols++;
	bsq.cols = cols;
	bsq.map_file = create_char_matrix(&buffer[i - cols], bsq.cols, bsq.rows);
	return (bsq);
}

char	**create_char_matrix(char *buffer, int cols, int rows)
{
	char	**map;
	int		i;
	int		j;
	int		index;

	map = malloc(sizeof(char *) * rows);
	i = 0;
	while (i < rows)
		map[i++] = 0;
	index = 0;
	i = 0;
	while (i < rows)
		map[i++] = malloc(sizeof(char) * cols + 1);
	i = 0;
	while (i < rows)
	{
		j = 0;
		while (j < cols)
			map[i][j++] = buffer[index++];
		map[i++][j] = '\0';
		index++;
	}
	return (map);
}

int	**create_num_matrix(t_bsq bsq)
{
	int	**tab;
	int	y;
	int	x;

	tab = malloc(sizeof(int *) * bsq.rows);
	y = 0;
	while (y < bsq.rows)
	{
		tab[y] = malloc(sizeof(int) * bsq.cols);
		x = 0;
		while (x < bsq.cols)
		{
			tab[y][x] = 0;
			x++;
		}
		y++;
	}
	return (create_num_matrix_aux(bsq, tab));
}

int	**create_num_matrix_aux(t_bsq bsq, int **tab)
{
	int	x;
	int	y;

	x = 1;
	while (x < bsq.rows)
	{
		y = 1;
		while (y < bsq.cols)
		{
			if (bsq.map_file[x][y] == bsq.obstacle)
				tab[x][y] = -1;
			else
				tab[x][y] = 0;
			y++;
		}
		x++;
	}
	return (tab);
}
