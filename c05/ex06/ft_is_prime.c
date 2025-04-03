/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 16:25:46 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/31 17:10:24 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb);

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

/*
#include <stdio.h>
int	main(void)
{
	printf("%d", ft_is_prime(13));
}
*/