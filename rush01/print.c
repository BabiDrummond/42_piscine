/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thigomes <thigomes@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/23 20:18:21 by thigomes          #+#    #+#             */
/*   Updated: 2025/03/23 20:40:55 by thigomes         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_number(int n);
void	ft_print_criteria(int arr[4][4]);

void	ft_print_number(int n)
{
	char	c;

	if (n >= 10)
		ft_print_number(n / 10);
	c = (n % 10) + '0';
	write(1, &c, 1);
}

void	ft_print_criteria(int arr[4][4])
{
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 3)
		{
			ft_print_number(arr[i][j]);
			write(1, " ", 1);
			j++;
		}
		ft_print_number(arr[i][j]);
		write(1, "\n", 1);
		i++;
	}
}
