/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 19:41:05 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/16 21:05:23 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/
void	ft_rev_int_tab(int *tab, int size);

void	ft_rev_int_tab(int *tab, int size)
{
	int	counter;
	int	rev_counter;
	int	temp;

	counter = 0;
	while (counter < (size / 2))
	{
		rev_counter = size - 1 - counter;
		temp = *(tab + counter);
		*(tab + counter) = *(tab + rev_counter);
		*(tab + rev_counter) = temp;
		counter++;
	}
}

/*
int	main(void)
{
	int numbers[7] = {3, 4, 5, 6, 7, 8, 9};
	int size = 7;
	int i = 0;
	
	while (i < size){
		printf("%d", *(numbers + i));
		i++;
	}
	printf("\n");
	ft_rev_int_tab(numbers, size);
	
	i = 0;
	while (i < size){
		printf("%d", *(numbers + i));
		i++;
	}
}
*/