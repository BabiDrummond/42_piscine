/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 21:03:52 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/19 17:37:17 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_combn(int n);
void	ft_print_combn_recursive(int max_digits);

void	ft_print_combn_recursive(int max_digits)
{
	int counter;
	int num;
	
	counter = 0;
	while (counter <= max_digits)
	{
		num = counter + '0';
		write(1, &num, 1);
		ft_print_combn_recursive(max_digits - 1);
		counter ++;
	}
}

void	ft_print_combn(int n)
{
	int	pos;
	int max;

	pos = 0;
	max = 9;
	if (n > 0 && n < 10)
	{
		while (pos < n)
		{
			ft_print_combn_recursive(max);
			pos++;
		}
	}
}

int	main(void)
{
	ft_print_combn(3);
}