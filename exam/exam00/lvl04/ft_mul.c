/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_mul.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:55:52 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/14 16:11:11 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_mul(int *ptr, int number)
{
	int result;
	
	result = *ptr * number;
	printf("%d", result);
}

int	main(void)
{
	int temp = 0;
	int *pt = &temp;
	
	*pt = 3;
	ft_mul(pt, 3);
}