/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/21 18:39:06 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/27 15:19:49 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_strlen(char *str);
unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size);

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str++)
		len++;
	return (len);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;

	i = 0;
	if (size == 0)
		return ((unsigned int) ft_strlen(src));
	else
	{
		while (size > 1 && src[i])
		{
			dest[i] = src[i];
			i++;
			size--;
		}
	}
	dest[i] = '\0';
	return ((unsigned int) ft_strlen(src));
}

/*
#include <stdio.h>
int main(void)
{
    char hello[] = "hello";
	char bye[] = "byeee4";
	unsigned size = 3;

	printf("%d", ft_strlcpy(hello, bye, size));
}
*/