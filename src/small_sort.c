/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   small_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/16 15:10:06 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/16 16:41:19 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	small_sort_three(t_list **a)
{
	int	one;
	int	two;
	int	three;

	one = (*a)->value;
	two = (*a)->next->value;
	three = (*a)->next->next->value;
	if (one > two && two < three && one < three)
		sa(a);
	else if (one < three && two > three && one < three)
	{
		rra(a);
		sa(a);
	}
	else if (one > two && two < three && one > three)
		ra(a);
	else if (one > two && two > three && one > three)
	{
		sa(a);
		rra(a);
	}
	else if (one < two && two > three && one > three)
		rra(a);
}

void	small_sort_four(t_list **a, t_list **b)
{
	int	i;

	i = get_smallest_nbr_pos(*a);
	move_node_to_top(a, i);
	pb(a, b);
	small_sort_three(a);
	pa(a, b);
}

void	small_sort_five(t_list **a, t_list **b)
{
	int	i;

	i = get_smallest_nbr_pos(*a);
	move_node_to_top(a, i);
	pb(a, b);
	i = get_smallest_nbr_pos(*a);
	move_node_to_top(a, i);
	pb(a, b);
	small_sort_three(a);
	pa(a, b);
	pa(a, b);
}

void	small_sort(t_list **a, t_list **b)
{
	int	size;

	size = lst_size(*a);
	if (size <= 1)
		return ;
	else if (size == 2)
	{
		if (!is_sorted(*a))
			sa(a);
	}
	else if (size == 3)
		small_sort_three(a);
	else if (size == 4)
		small_sort_four(a, b);
	else if (size == 5)
		small_sort_five(a, b);
}
