/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 07:34:50 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/31 09:26:21 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_c_is_numeric(char c);
int	ft_atoi(char *str);

int	ft_c_is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}

int	ft_atoi(char *str)
{
	int	num;
	int	negative;

	num = 0;
	negative = 1;
	while (*str == 32 || (*str >= 7 && *str <= 13))
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			negative *= -1;
		str++;
	}
	while (ft_c_is_numeric(*str))
		num = num * 10 + *str++ - '0';
	return (num * negative);
}

/*
#include <stdio.h>
int main(void)
{
	int i;
	char *s;
 
	s = " -9885";
	i = ft_atoi(s);
 
	printf("i = %d\n",i);
}
*/