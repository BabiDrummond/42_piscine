/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmoreira <bmoreira@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/01 19:44:02 by bmoreira          #+#    #+#             */
/*   Updated: 2025/04/02 22:28:58 by bmoreira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H
# include <fcntl.h>
# include <unistd.h>
# include <stdlib.h>

typedef struct s_bsq
{
	char	**map_file;
	int		rows;
	int		cols;
	char	empty;
	char	obstacle;
	char	full;
	int		bsq_size;
}	t_bsq;

typedef struct s_sol
{
	int	x;
	int	y;
	int	number;
}	t_sol;

t_bsq	parse_map(char *buffer, int i);
char	*read_file(char *file_name);
char	**create_char_matrix(char *buffer, int cols, int rows);
int		**create_num_matrix(t_bsq bsq);
int		**create_num_matrix_aux(t_bsq bsq, int **tab);
t_sol	solve(int **map, t_bsq bsq, t_sol sol);
int		check_square_size(int **map, int x, int y);
t_bsq	draw_square(t_sol sol, t_bsq bsq);
void	diplay(t_bsq bsq);
void	free_all_memory(int **map, t_bsq bsq);
int		is_numeric(char c);
int		is_printable(char c);
int		count_rows(char *str, int first_line);
int		count_first_line(char *str);
int		check_first_line(char *str, int first_line);
int		check_rest(char *str);
int		validator(char *buffer, int first_line);

#endif