/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:52:06 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/27 15:34:45 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr_non_printable(char *str);
void	ft_convert_dec_hex(int c);

void	ft_putstr_non_printable(char *str)
{	
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			write(1, str, 1);
		else
		{
			write(1, "\\", 1);
			if (*str < 16)
				write(1, "0", 1);
			ft_convert_dec_hex((unsigned char) *str);
		}
		str++;
	}
}

void	ft_convert_dec_hex(int c)
{	
	char	hex_char;

	if (c / 16 != 0)
		ft_convert_dec_hex(c / 16);
	if (c % 16 < 10)
		hex_char = c % 16 + '0';
	else
		hex_char = c % 16 - 10 + 'a';
	write(1, &hex_char, 1);
}

/*
int	main(void)
{
	char text[] = "Oi\nvoce esta bem?";

	ft_putstr_non_printable(text);
}
*/