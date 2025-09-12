/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_op_push.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/12 15:29:07 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 15:30:54 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// ----- push
int	push(t_list **src, t_list **dst)
{
	t_list	*temp;

	if (!src || !*src)
		return (0);
	temp = lst_pop_front(src);
	lst_add_front(dst, temp);
	return (1);
}

// pa (push a): Take the first element at the top of b and put it at the top of a.
void	pa(t_list **a, t_list **b)
{
	if (push(b, a))
		ft_putstr_fd("pa\n", 1);
}

// pb (push b): Take the first element at the top of a and put it at the top of b.
void	pb(t_list **a, t_list **b)
{
	if (push(a, b))
		ft_putstr_fd("pb\n", 1);
}
