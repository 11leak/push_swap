/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op_rotate.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:29:59 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 15:31:14 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ----- rotate
int	rotate(t_list **head)
{
	t_list	*first;

	if (!head || !*head || !(*head)->next)
		return (0);
	first = lst_pop_front(head);
	lst_add_back(head, first);
	return (1);
}

// ra (rotate a): Shift up all elements of stack a by 1.
void	ra(t_list **a)
{
	if (rotate(a))
		ft_putstr_fd("ra\n", 1);
}

// rb (rotate b): Shift up all elements of stack b by 1.
void	rb(t_list **b)
{
	if (rotate(b))
		ft_putstr_fd("rb\n", 1);
}

// rr : ra and rb at the same time.
void	rr(t_list **a, t_list **b)
{
	int	tof;

	tof = 0;
	if (rotate(a))
		tof = 1;
	if (rotate(b))
		tof = 1;
	if (tof)
		ft_putstr_fd("rr\n", 1);
}
