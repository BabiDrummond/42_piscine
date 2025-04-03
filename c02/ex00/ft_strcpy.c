/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/17 20:41:50 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/24 17:51:23 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src);

char	*ft_strcpy(char *dest, char *src)
{
	char	*temp_dest;

	temp_dest = dest;
	while (*src)
		*dest++ = *src++;
	*dest = '\0';
	return (temp_dest);
}
/*
#include <unistd.h>
int	main(void)
{
	char hello[] = "hellopppitty";
	char bye[] = "byeeeeeeeeeeeeeee";
	
	char *result = ft_strcpy(hello, bye);
	
	while (*result)
		write(1, result++, 1);
}
*/
