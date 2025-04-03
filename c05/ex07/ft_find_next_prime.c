/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 17:11:08 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/31 18:05:35 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);
int	ft_find_next_prime(int nb);

int	ft_is_prime(int nb)
{
	int	num;
	int	prime;

	num = 1;
	prime = 0;
	while (num <= nb)
	{
		if (nb % num == 0)
			prime++;
		num++;
	}
	if (prime > 2 || nb <= 1)
		return (0);
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 1)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_find_next_prime(14));
}
*/