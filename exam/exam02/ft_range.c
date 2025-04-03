/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/03 01:11:56 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 03:20:12 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

/*
Assignment name  : ft_range
Expected files   : ft_range.c
Allowed functions: malloc
--------------------------------------------------------------------------------

Write the following function:

int     *ft_range(int start, int end);

It must allocate (with malloc()) an array of integers, fill it with consecutive
values that begin at start and end at end (Including start and end !), then
return a pointer to the first value of the array.

Examples:

- With (1, 3) you will return an array containing 1, 2 and 3.
- With (-1, 2) you will return an array containing -1, 0, 1 and 2.
- With (0, 0) you will return an array containing 0.
- With (0, -3) you will return an array containing 0, -1, -2 and -3.
*/
int	*ft_range(int min, int max);

int	*ft_range(int min, int max)
{
	int		*num_arr;
	long	diff;
	long	index;
	long	start;

	diff = 0;
	index = 0;
	start = (long) min;
	if (min >= max)
		diff = (long) min - max;
	if (min < max)
		diff = (long) max - min;
	num_arr = malloc(sizeof(long) * (diff + 1));
	while (index <= diff)
	{
		if (min > max)
			num_arr[index] = start--;
		if (min < max)
			num_arr[index] = start++;
		if (min == max)
			num_arr[index] = start;
		index++;
	}
	return (num_arr);
}

#include <stdio.h>
#include <limits.h>
int	main(void)
{
	int	*min;
	int	i;
	
	min = ft_range(INT_MIN, 2);
	i = 0;
	while (i < 10)
		printf("%d\n", min[i++]);
	free(min);
}
