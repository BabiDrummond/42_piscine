/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thigomes <thigomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:18:13 by thigomes          #+#    #+#             */
/*   Updated: 2025/03/23 20:47:12 by thigomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_solve(int arr[4][4]);
void	ft_print_criteria(int arr[4][4]);
void	ft_init_grid(int arr[4][4], int grid[4][4]);
int		ft_recursion(int grid[4][4], int arr[4][4], int r, int c);
int		ft_row_leftright(int check, int *attr, int grid[4][4], int arr[4][4]);
int		ft_col_updown(int check, int *attr, int grid[4][4], int arr[4][4]);
int		ft_rightleft(int check, int *attr, int grid[4][4], int arr[4][4]);
int		ft_downup(int check, int *attr, int grid[4][4], int arr[4][4]);

int	ft_is_valid(int grid[4][4], int arr[4][4], int *attr)
{
	grid[attr[0]][attr[1]] = attr[2];
	if (ft_row_leftright(0, attr, grid, arr) == 1)
		return (1);
	if (ft_col_updown(0, attr, grid, arr) == 1)
		return (1);
	if (ft_rightleft(0, attr, grid, arr) == 1)
		return (1);
	if (ft_downup(0, attr, grid, arr) == 1)
		return (1);
	return (0);
}

int	ft_condition(int arr[4][4], int r, int c)
{
	if ((r == 0) && (arr[0][c] == 2 || arr[0][c] == 3))
		return (1);
	if ((r == 3) && (arr[1][c] == 2 || arr[1][c] == 3))
		return (1);
	if ((c == 0) && (arr[2][r] == 2 || arr[2][r] == 3))
		return (1);
	if ((c == 3) && (arr[3][r] == 2 || arr[3][r] == 3))
		return (1);
	return (0);
}

int	ft_condition_loop(int *i, int *attr, int arr[4][4], int grid[4][4])
{
	int	r;
	int	c;

	r = attr[0];
	c = attr[1];
	while (++*i < 5)
	{
		if (*i == 4 && (attr[0] == 0 || attr[1] == 0 \
			|| attr[0] == 3 || attr[1] == 3))
		{
			if (ft_condition(arr, r, c) == 1)
				continue ;
		}
		attr[2] = *i;
		if (ft_is_valid(grid, arr, attr) == 0)
		{
			if (ft_recursion(grid, arr, r, c + 1) == 0)
				return (0);
			grid[r][c] = -1;
		}
		else
			grid[r][c] = -1;
	}
	return (1);
}

int	ft_recursion(int grid[4][4], int arr[4][4], int r, int c)
{
	int	i;
	int	attr[3];

	i = 0;
	attr[0] = r;
	attr[1] = c;
	if (r == 4)
		return (0);
	else if (c == 4)
		return (ft_recursion(grid, arr, r + 1, 0));
	else if (grid[r][c] != -1)
		return (ft_recursion(grid, arr, r, c + 1));
	else
	{
		if (ft_condition_loop(&i, attr, arr, grid) == 0)
			return (0);
		else
			return (1);
	}
}

void	ft_solve(int arr[4][4])
{
	int	grid[4][4];
	int	i;
	int	j;
	int	ans;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
			grid[i][j] = -1;
	}
	ft_init_grid(arr, grid);
	ans = ft_recursion(grid, arr, 0, 0);
	if (ans == 0)
		ft_print_criteria(grid);
	else
		write(1, "Error solve", 11);
}
