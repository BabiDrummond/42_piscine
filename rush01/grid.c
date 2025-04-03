/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   grid.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thigomes <thigomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:18:45 by thigomes          #+#    #+#             */
/*   Updated: 2025/03/23 20:45:09 by thigomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_criteria(int arr[4][4]);

void	ft_inc_asign(int grid[4][4], int constant, int roworcol, int inc_or_dec)
{
	int	z;

	if (inc_or_dec == 0)
	{
		z = 1;
		while (z < 4)
		{
			if (roworcol == 0)
				grid[constant][z] = z + 1;
			else
				grid[z][constant] = z + 1;
			z++;
		}
	}
	else
	{
		z = 4;
		while (--z > -1)
		{
			if (roworcol == 0)
				grid[constant][z] = 4 - z;
			else
				grid[z][constant] = 4 - z;
		}
	}
}

void	ft_asign_one(int grid[4][4], int i, int j)
{
	if (i == 0)
		grid[0][j] = 4;
	else if (i == 1)
		grid[3][j] = 4;
	else if (i == 2)
		grid[j][0] = 4;
	else
		grid[j][3] = 4;
}

void	ft_asign(int grid[4][4], int *i, int *j, int arr[4][4])
{
	if (arr[*i][*j] == 1)
		ft_asign_one(grid, *i, *j);
	else if (*i == 0)
		ft_inc_asign(grid, *j, 1, 0);
	else if (*i == 1)
		ft_inc_asign(grid, *j, 1, 1);
	else if (*i == 2)
		ft_inc_asign(grid, *j, 0, 0);
	else
		ft_inc_asign(grid, *j, 0, 1);
}

void	ft_init_grid(int arr[4][4], int grid[4][4])
{
	int	i;
	int	j;

	i = -1;
	while (++i < 4)
	{
		j = -1;
		while (++j < 4)
		{
			if (arr[i][j] == 4 || arr[i][j] == 1)
			{
				ft_asign(grid, &i, &j, arr);
			}
		}
	}
}
