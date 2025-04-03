/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/16 20:54:05 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/17 18:28:52 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size);

void	ft_sort_int_tab(int *tab, int size)
{
	int	m;
	int	n;
	int	temp;

	m = 0;
	while (m < size - 1)
	{
		n = 0;
		while (n < size - 1)
		{
			if (tab[n] > tab[n + 1])
			{
				temp = tab[n];
				tab[n] = tab[n + 1];
				tab[n + 1] = temp;
			}
			n++;
		}
		m++;
	}
}

/*
int	main(void){
	int numbers[7] = {5, 4, 7, 9, 3, 1, 6};
	int size = 7;
	int i = 0;
	
	//printf("bef0: %d\n", tab[n]);
	//printf("bef1: %d\n", tab[n+1]);
	
	//printf("aft0: %d\n", tab[n]);
	//printf("aft1: %d\n", tab[n+1]);
	
	while (i < size){
		printf("%d\n", *(numbers + i));
		i++;
	}
	printf("\n");
	ft_sort_int_tab(numbers, size);
	
	i = 0;
	while (i < size){
		printf("%d\n", *(numbers + i));
		i++;
	}
}
*/