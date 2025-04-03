/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 06:37:21 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/26 06:51:51 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src);

char	*ft_strcat(char *dest, char *src)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*dest)
		dest++;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp_dest);
}

/*
#include <stdio.h>
int	main(void)
{
	char text[] = "Oi voce esta bem?";
	char text2[] = " Nao";

	printf("%s", ft_strcat(text, text2));
}
*/