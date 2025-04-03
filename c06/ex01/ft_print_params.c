/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:13:11 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/01 17:56:12 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str);
void	ft_print_params(char **args, int argc);

void	ft_print(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_print_params(char **args, int argc)
{
	int	index;

	index = 1;
	while (index < argc)
		ft_print(args[index++]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_print_params(argv, argc);
}
