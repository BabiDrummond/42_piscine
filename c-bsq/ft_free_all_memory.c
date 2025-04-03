/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_free_all_memory.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 04:37:01 by hhayashi          #+#    #+#             */
/*   Updated: 2025/04/02 22:38:01 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

void	free_all_memory(int **map, t_bsq bsq)
{
	int	index;

	index = 0;
	while (index < bsq.rows)
		free(map[index++]);
	free(map);
}
