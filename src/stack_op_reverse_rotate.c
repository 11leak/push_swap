/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op_reverse_rotate.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:29:55 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 16:24:58 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ----- reverse rotate
int	reverse_rotate(t_list **head)
{
	t_list	*before_last;
	t_list	*last;

	if (!head || !*head || !(*head)->next)
		return (0);
	before_last = lst_before_last(*head);
	last = before_last->next;
	before_last->next = NULL;
	last->next = *head;
	*head = last;
	return (1);
}

// rra (reverse rotate a): Shift down all elements of stack a by 1.
void	rra(t_list **a)
{
	if (reverse_rotate(a))
		ft_putstr_fd("rra\n", 1);
}

// rrb (reverse rotate b): Shift down all elements of stack b by 1.
void	rrb(t_list **b)
{
	if (reverse_rotate(b))
		ft_putstr_fd("rrb\n", 1);
}

// rrr : rra and rrb at the same time.
void	rrr(t_list **a, t_list **b)
{
	int	tof;

	tof = 0;
	if (reverse_rotate(a))
		tof = 1;
	if (reverse_rotate(b))
		tof = 1;
	if (tof)
		ft_putstr_fd("rrr\n", 1);
}
