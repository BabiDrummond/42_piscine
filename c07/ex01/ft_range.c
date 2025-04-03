/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:11:56 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 03:26:45 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int		*num_arr;
	long	index;
	long	diff;

	index = 0;
	diff = (long) max - min;
	if (min >= max)
		return (NULL);
	num_arr = malloc(sizeof(long) * (diff));
	while (index <= diff)
		num_arr[index++] = (long) min++;
	return (num_arr);
}

/*
#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int *min;
	int i;
	
	min = ft_range(-5, 3);
	i = 0;
	while (i < 10)
		printf("%d\n", min[i++]);
	free(min);
}
*/