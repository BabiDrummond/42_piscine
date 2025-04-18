/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/26 07:34:50 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/02 22:27:35 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	is_printable(char c)
{
	if (c < 32 || c > 126)
		return (0);
	return (1);
}

int	is_numeric(char c)
{
	if (c < '0' || c > '9')
		return (0);
	return (1);
}
