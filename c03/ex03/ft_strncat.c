/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 06:52:08 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/26 08:06:46 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb);

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*dest)
		dest++;
	while (nb >= 1 && *src)
	{
		*dest++ = *src++;
		nb--;
	}
	*dest = '\0';
	return (temp_dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char text[] = "Oi voce esta bem?";
	char text2[] = " Nao";

	printf("%s", ft_strncat(text, text2, 0));
}
*/