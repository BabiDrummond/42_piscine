/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 17:22:03 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/01 18:01:45 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2);
void	ft_print(char *str);
void	ft_sort_params(char **args, int argc);

int	ft_strcmp(char *s1, char *s2)
{
	while ((unsigned char)*s1 && (unsigned char)*s1 == (unsigned char)*s2)
	{
		s1++;
		s2++;
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}

void	ft_print(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_sort_params(char **args, int argc)
{
	int		m;
	int		n;
	int		index;
	char	*temp;

	m = 1;
	index = 1;
	while (m < argc - 1)
	{
		n = 1;
		while (n < argc - 1)
		{
			if (ft_strcmp(args[n], args[n + 1]) > 0)
			{
				temp = args[n];
				args[n] = args[n + 1];
				args[n + 1] = temp;
			}
			n++;
		}
		m++;
	}
	while (index < argc)
		ft_print(args[index++]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_sort_params(argv, argc);
}
