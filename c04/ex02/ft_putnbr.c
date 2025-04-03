/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/18 17:59:09 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/18 21:02:53 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb);

void	ft_putnbr(int nb)
{
	int	mod;

	if (nb == -2147483648)
		write(1, "-2147483648", 11);
	else
	{
		if (nb < 0)
		{
			write(1, "-", 1);
			nb = nb * (-1);
		}
		if (nb / 10 != 0)
		{
			mod = nb % 10 + '0';
			ft_putnbr(nb / 10);
			write(1, &mod, 1);
		}
		else
		{
			mod = nb % 10 + '0';
			write(1, &mod, 1);
		}	
	}
}
/*

int	main(void)
{
	ft_putnbr(2147483647);
}
*/
