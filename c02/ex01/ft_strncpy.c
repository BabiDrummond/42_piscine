/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/19 20:41:02 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/26 03:49:33 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n);

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int		bytes;
	char				*temp_dest;

	bytes = 0;
	temp_dest = dest;
	while (bytes < n)
	{
		if (*src)
			*dest++ = *src++;
		else
			*dest++ = '\0';
		bytes++;
	}
	return (temp_dest);
}

/*#include <unistd.h>
int	main(void)
{
	char hello[] = "hello";
	char bye[] = "bye";
	int size = 5;
	int counter = 0;
	
	char *result = ft_strncpy(hello, bye, size);

	while (counter < 5)
	{
		write(1, result++, 1);
		counter++;
	}
}
*/