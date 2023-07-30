/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   philo.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 18:37:22 by mjales          #+#    #+#             */
/*   Updated: 2023/05/10 10:20:39 by mjales         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MINISHELL_H
# define MINISHELL_H

#include <string.h>
# include <stdio.h>
# include <unistd.h>
# include <readline/readline.h>
# include <readline/history.h>
# include <stdlib.h>

#define def = 0;
#define sq = 1;
#define dq = 2

//Structs
typedef struct s_elems
{
	char *s;
	int *state;
}	t_elems;

typedef struct s_vars
{
	char	*s;
	t_elems *tokens;
	char	**sc;
	int		num_sc;
}	t_vars;

//Lexer functions
void lexer();

//Auxiliar functions
size_t ft_strlen(const char* str);
t_vars	*vars(void);
t_elems	*elems(void);
int		all_space(char *s);
void	create_sc(void);

#endif
