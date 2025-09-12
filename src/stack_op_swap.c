/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op_swap.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:28:42 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 16:25:11 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ----- swap
int	swap(t_list **head)
{
	t_list	*first;
	t_list	*second;

	if (!head || !*head || !(*head)->next)
		return (0);
	first = *head;
	second = first->next;
	first->next = second->next;
	second->next = first;
	*head = second;
	return (1);
}

// sa (swap a): Swap the first 2 elements at the top of stack a.
void	sa(t_list **a)
{
	if (swap(a))
		ft_putstr_fd("sa\n", 1);
}

// sb (swap b): Swap the first 2 elements at the top of stack b.
void	sb(t_list **b)
{
	if (swap(b))
		ft_putstr_fd("sb\n", 1);
}

// ss : sa and sb at the same time.
void	ss(t_list **a, t_list **b)
{
	int	tof;

	tof = 0;
	if (swap(a))
		tof = 1;
	if (swap(b))
		tof = 1;
	if (tof)
		ft_putstr_fd("ss\n", 1);
}
