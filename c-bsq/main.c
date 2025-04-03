/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 18:43:46 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/02 22:40:12 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	main(int argc, char **argv)
{
	char	*file;
	t_bsq	bsq;
	t_sol	sol;
	int		i;
	int		**map;

	argc = 2;
	sol.number = 0;
	map = 0;
	i = 0;
	file = read_file(argv[1]);
	if (count_first_line(file) && validator(file, count_first_line(file)))
	{
		bsq = parse_map(file, count_first_line(file));
		map = create_num_matrix(bsq);
		sol = solve(map, bsq, sol);
		bsq = draw_square(sol, bsq);
		diplay(bsq);
		free_all_memory(map, bsq);
	}
	else
		write(1, "map error\n", 10);
	free(file);
}
