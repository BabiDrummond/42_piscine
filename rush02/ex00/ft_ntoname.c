/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ntoname.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 02:58:41 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/30 22:24:22 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_strlen(char *str);
char	*ft_endtrim(char *input, char *output, int strlen);
char	*ft_strtrim(char *input, char *output, int strlen);
char	*add_zeros(char *input, char *output);
void	ft_rec_name(char *str);

void	ft_rec_name(char *str)
{
	int		strlen;
	char	*trimmed_beg;
	char	*trimmed_end;

	strlen = ft_strlen(str);
	trimmed_beg = malloc(strlen - 3 + 1);
	trimmed_end = malloc(4);
	if (strlen > 3)
	{
		trimmed_beg = ft_strtrim(str, trimmed_beg, strlen);
		ft_rec_name(trimmed_beg);
		free(trimmed_beg);
	}
	trimmed_end = ft_endtrim(str, trimmed_end, strlen);
	if (strlen < 3)
		str = add_zeros(str, trimmed_end);
	printf("%s", trimmed_end);
	free(trimmed_end);
}
