/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 03:29:23 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 04:46:29 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max);

int	ft_ultimate_range(int **range, int min, int max)
{
	long	index;
	long	diff;

	index = 0;
	diff = (long) max - min;
	if (min >= max)
		return (-1);
	*range = malloc(sizeof(long) * (diff));
	while (index <= diff)
		*range[index++] = (long) min++;
	return ((int) diff);
}

#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int res = 0;
	
	res = ft_ultimate_range(&res, -5, 3);
	printf("%d\n", res);
}
