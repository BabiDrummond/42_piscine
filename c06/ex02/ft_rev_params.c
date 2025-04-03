/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/31 19:29:50 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/01 17:56:42 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print(char *str);
void	ft_rev_params(char **args, int argc);

void	ft_print(char *str)
{
	while (*str)
		write(1, str++, 1);
	write(1, "\n", 1);
}

void	ft_rev_params(char **args, int argc)
{
	while (argc > 1)
		ft_print(args[--argc]);
}

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_rev_params(argv, argc);
}
