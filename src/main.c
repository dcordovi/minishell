/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjales <mjales@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 10:17:18 by mjales            #+#    #+#             */
/*   Updated: 2023/06/06 11:24:29 by mjales           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/minishell.h"

t_vars	*vars(void)
{
	static t_vars	var;

	return (&var);
}

t_elems	*elems(void)
{
	static 	t_elems elem;

	return (&elem);
}

int	main(int argc, char **argv, char **envp)
{
	(void)argv;
	(void)argc;
	(void)envp;
	int i = 0;
	while (1)
	{
		vars()->num_sc = 14;
		vars()->s = readline("minishell>");
		elems()->s = vars()->s;
		elems()->state = malloc(sizeof(int)*ft_strlen(vars()->s));
		lexer();
		while (i < 10)
		{
			printf("%d\n", elems()->state[i]);
			i++;
		}
		i = 0;
	}
	// 	if (vars()->s == NULL)
	// 		break ;
	// 	if (strcmp(vars()->s, "exit") == 0)
	// 	{
	// 		free(vars()->s);
	// 		break ;
	// 	}
	// 	if (all_space(vars()->s))
	// 	{
	// 		free(vars()->s);
	// 		continue ;
	// 	}
	// 	printf("%s\n", vars()->s);
	// 	add_history(vars()->s);
	// 	vars()->tokens = lexer(vars()->s);
	// 	create_sc();
	// 	int i = 0;
	// 	while (vars()->tokens[i])
	// 	{
	// 		printf("%d = %s\n", i, vars()->tokens[i]);
	// 		i++;
	// 	}
	// 	free(vars()->s);

	// (void)argc;
	// (void)argv;
	// (void)envp;
	return (0);
}
