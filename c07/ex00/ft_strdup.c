/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 23:16:53 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/03 02:14:39 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strcpy(char *dest, char *src);
char	*ft_strdup(char *src);

int	ft_strlen(char *str)
{
	int	count;

	count = 0;
	while (*str)
	{
		count++;
		str++;
	}
	return (count);
}

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp_dest);
}

char	*ft_strdup(char *src)
{
	char	*new_str;

	new_str = malloc(ft_strlen(src));
	if (new_str == NULL)
		return (NULL);
	new_str = ft_strcpy(new_str, src);
	return (new_str);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("%s\n", ft_strdup("lalalaladas"));
}
*/