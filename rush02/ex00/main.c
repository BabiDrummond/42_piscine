/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 18:31:27 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/30 22:26:25 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

char	*read_file(char *file_name);
t_dict	*ft_todict(char *str);
void	ft_rec_name(char *str);

int	main(int argc, char *argv[])
{	
	char	*dict;

	if (argc == 3)
	{
		dict = read_file(argv[1]);
		ft_rec_name(argv[2]);
		free(dict);
	}
	else if (argc == 2)
		ft_rec_name(argv[1]);
}
