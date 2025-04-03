/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_format.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 17:34:47 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/30 22:18:35 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_strip(char *str);
char	*ft_endtrim(char *input, char *output, int strlen);
char	*ft_strtrim(char *input, char *output, int strlen);
char	*add_zeros(char *input, char *output);

char	*ft_strip(char *str)
{
	char	*str_end;
	int		str_len;

	str_len = ft_strlen(str);
	str_end = str + str_len - 1;
	while (str_end >= str && *str_end == ' ')
		str_end--;
	*(str_end + 1) = '\0';
	while (*str && *str == ' ')
		str++;
	return (str);
}

char	*ft_endtrim(char *input, char *output, int strlen)
{
	int	i;

	i = 3;
	output[3] = '\0';
	while (i > 0)
		output[--i] = input[--strlen];
	return (output);
}

char	*ft_strtrim(char *input, char *output, int strlen)
{
	int	i;

	i = strlen - 3;
	output[strlen - 3] = '\0';
	while (i > 0)
		output[--i] = input[--strlen - 3];
	return (output);
}

char	*add_zeros(char *input, char *output)
{
	int	len;

	len = ft_strlen(input);
	if (len == 0 || len >= 3)
		return (input);
	else if (len == 2)
	{
		output[0] = '0';
		output[1] = input[0];
		output[2] = input[1];
	}
	else if (len == 1)
	{
		output[0] = '0';
		output[1] = '0';
		output[2] = input[0];
	}
	output[3] = '\0';
	return (output);
}
