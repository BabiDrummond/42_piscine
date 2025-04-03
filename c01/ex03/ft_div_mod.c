/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 16:00:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/16 16:11:05 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_div_mod(int a, int b, int *div, int *mod);

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*
int	main(void)
{
	int n1 = 10;
	int n2 = 3;

	int *d = &n1;
	int *m = &n2;

	printf("%d %d %d %d ", n1, n2, *d, *m);
	ft_div_mod(n1, n2, d, m);
	printf("%d %d %d %d ", n1, n2, *d, *m);
}
*/
