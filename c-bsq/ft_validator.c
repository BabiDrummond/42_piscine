/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_validator.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 00:56:40 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/02 22:25:24 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	count_rows(char *str, int first_line)
{
	int	count;
	int	rows;

	count = 0;
	rows = 0;
	while (count++ < first_line - 3)
	{
		if (is_numeric(*str))
			rows = rows * 10 + *str++ - '0';
	}
	if (count + 3 < first_line)
		return (0);
	return (rows);
}

int	count_first_line(char *str)
{
	int	count;

	count = 0;
	while (*str++ != '\n')
		count++;
	if (count <= 3)
		return (0);
	return (count);
}

int	check_first_line(char *str, int first_line)
{
	char	map_chars[3];
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (str[first_line] != '\n')
		return (0);
	while (j < 3)
	{
		if (is_printable(str[--first_line]))
			map_chars[j++] = str[first_line];
	}
	if (map_chars[i] == map_chars[i + 1]
		|| map_chars[i] == map_chars[i + 2]
		|| map_chars[i + 1] == map_chars[i + 2])
		return (0);
	return (1);
}

int	check_rest(char *str)
{
	int	cols;
	int	i;

	cols = 0;
	i = 0;
	while (*str && *++str != '\n')
		cols++;
	while (*str && i <= cols)
	{
		str++;
		if (*str == '\n' && i == cols)
			i = -1;
		i++;
	}
	if (!*str || *str != '\n' || i != cols)
		return (0);
	return (1);
}

int	validator(char *buffer, int first_line)
{
	if (!count_rows(buffer, first_line)
		|| !check_first_line(buffer, first_line))
		return (0);
	return (1);
}
