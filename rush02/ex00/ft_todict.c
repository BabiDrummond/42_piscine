/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_todict.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/30 16:49:58 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/30 22:16:57 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_dict
{
	char	*key;
	char	*value;
}	t_dict;

t_dict	*ft_todict(char *str);

/*
t_dict	*ft_todict(char *str)
{
	char *key;
	char *value;

	while(*str != ':')
		str++;

	return t_dict;
}
*/