/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/29 20:12:35 by bmoreira          #+#    #+#             */
/*   Updated: 2025/03/30 22:17:17 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

char	*read_file(char *file_name);

char	*read_file(char *file_name)
{
	char	*buffer;
	char	c;
	int		file;
	int		fsize;

	fsize = 1;
	file = open(file_name, O_RDONLY);
	if (file < 0)
		return (NULL);
	while (read(file, &c, 1) > 0)
		fsize++;
	close(file);
	buffer = malloc(fsize);
	file = open(file_name, O_RDONLY);
	read(file, buffer, fsize);
	buffer[fsize] = '\0';
	return (buffer);
}
