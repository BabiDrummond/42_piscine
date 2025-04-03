/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 18:55:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/16 19:39:11 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_ultimate_div_mod(int *a, int *b);

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *a / *b;
	*b = temp % *b;
}

/*
int	main(void)
{
	int n1 = 10;
	int n2 = 3;

	int *d = &n1;
	int *m = &n2;

	printf("%d %d ", *d, *m);
	ft_ultimate_div_mod(d, m);
	printf("%d %d ", *d, *m);
}*/