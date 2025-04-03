/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 11:50:50 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/31 12:43:46 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power);

int	ft_iterative_power(int nb, int power)
{
	int	initial;

	initial = nb;
	if (power < 0)
		return (0);
	else if (power == 0)
		return (1);
	while (power-- > 1)
		nb *= initial;
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_iterative_power(3, 0));
}
*/