/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 15:34:37 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/16 17:09:39 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	find_pos_in_array(int *array, int size, int val)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (array[i] == val)
			return (i);
		i++;
	}
	return (-1);
}

void	index_allocation_util(t_list *head, int *array, int size)
{
	while (head)
	{
		head->index = find_pos_in_array(array, size, head->value);
		head = head->next;
	}
}

void	index_allocation(t_list *a)
{
	int		i;
	int		size;
	int		*array;
	t_list	*head;

	size = lst_size(a);
	if (size <= 0)
		return ;
	array = (int *)malloc(sizeof(int) * size);
	if (!array)
		return ;
	head = a;
	i = 0;
	while (head)
	{
		array[i++] = head->value;
		head = head->next;
	}
	index_sort(array, size);
	index_allocation_util(a, array, size);
	free(array);
}

void	radix_sort(t_list **a, t_list **b)
{
	int	n;
	int	bits;
	int	i;
	int	j;

	n = lst_size(*a);
	bits = get_max_bits(*a);
	i = 0;
	while (i < bits)
	{
		j = 0;
		while (j < n)
		{
			if (((*a)->index >> i) & 1)
				ra(a);
			else
				pb(a, b);
			j++;
		}
		while (*b)
			pa(a, b);
		i++;
	}
}
