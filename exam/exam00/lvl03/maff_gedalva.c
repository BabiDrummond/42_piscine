/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_gedalva.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/14 15:32:12 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/14 16:23:04 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void print_alphabet(void){
	char letter;

	letter = 'z';
	while (letter >= 'a')
	{
		if (letter % 2 == 0)
		{
			write(1, &letter, 1);
		}
		else
		{
			letter -= 32;
			write(1, &letter, 1);
			letter +=32;
		}
		letter--;
	}
}

int	main(void)
{
	print_alphabet();
}