/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/15 20:36:35 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/16 15:52:53 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
*/

void	ft_swap(int *a, int *b);

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
/*
int	main(void){
	int n1 = 9;
	int n2 = 3;
	int *ptr = &n1;
	int *ptr2 = &n2;
	
	printf("%d %d ", *ptr, *ptr2);
	ft_swap(ptr, ptr2);
	printf("%d %d", *ptr, *ptr2);
}
*/
