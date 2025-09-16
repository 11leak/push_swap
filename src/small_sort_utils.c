/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort_utils.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:55:15 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/16 16:30:20 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_smallest_nbr_pos(t_list *a)
{
	int		i;
	int		min_val;
	int		min_val_pos;

	if (!a)
		return (-1);
	min_val = a->value;
	min_val_pos = 0;
	i = 0;
	while (a)
	{
		if (a->value < min_val)
		{
			min_val = a->value;
			min_val_pos = i;
		}
		a = a->next;
		i++;
	}
	return (min_val_pos);
}

void	move_node_to_top(t_list **a, int pos)
{
	int	size;

	size = lst_size(*a);
	if (pos <= size / 2)
		while (pos-- > 0)
			ra(a);
	else
		while (pos++ < size)
			rra(a);
}
