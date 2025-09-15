/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handling.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 12:19:54 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/15 14:28:00 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	free_array(char **array)
{
	int	i;

	if (!array)
		return ;
	i = 0;
	while (array[i])
	{
		free(array[i]);
		i++;
	}
	free(array);
}

static int	add_tokens_to_stack(char **tokens, t_list **a)
{
	int		j;
	long	val;
	t_list	*node;

	j = 0;
	while (tokens[j])
	{
		if (!is_valid_input(tokens[j], &val))
			return (lst_clear(a), 0);
		node = lst_new((int)val);
		if (!node)
			return (lst_clear(a), 0);
		lst_add_back(a, node);
		j++;
	}
	return (1);
}

int	parse_args_to_stack(int argc, char **argv, t_list **a)
{
	int		i;
	char	**splitted;

	i = 1;
	while (i < argc)
	{
		splitted = ft_split(argv[i], ' ');
		if (!splitted || !splitted[0])
			return (free_array(splitted), 0);
		if (!add_tokens_to_stack(splitted, a))
			return (free_array(splitted), 0);
		free_array(splitted);
		i++;
	}
	if (has_duplicates(*a))
		return (lst_clear(a), 0);
	return (1);
}
