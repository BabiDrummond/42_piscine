/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/20 18:00:41 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/27 15:20:30 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_c_is_alphanum(char c);
int		ft_c_is_lower(char c);
int		ft_c_is_upper(char c);
char	*ft_strcapitalize(char *str);

int	ft_c_is_alphanum(char c)
{
	if ((c < 'A' || c > 'Z') && (c < 'a' || c > 'z')
		&& (c < '0' || c > '9'))
		return (0);
	return (1);
}

int	ft_c_is_lower(char c)
{
	if (c < 'a' || c > 'z')
		return (0);
	return (1);
}

int	ft_c_is_upper(char c)
{
	if (c < 'A' || c > 'Z')
		return (0);
	return (1);
}

char	*ft_strcapitalize(char *str)
{
	int	index;

	index = 1;
	if (ft_c_is_lower(*str))
		*str -= 32;
	while (str[index])
	{
		if (!ft_c_is_alphanum(str[index - 1]) && ft_c_is_lower(str[index]))
			str[index] -= 32;
		else if (ft_c_is_alphanum(str[index - 1]) && ft_c_is_upper(str[index]))
			str[index] += 32;
		index++;
	}
	return (str);
}

/*
#include <stdio.h>
int	main(void)
{
	char word[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	printf("%s", ft_strcapitalize(word));	
}
*/