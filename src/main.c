/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:43:13 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/16 15:14:05 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort(t_list **a, t_list **b)
{
	if (lst_size(*a) <= 5)
	{
		small_sort(a, b);
	}
	else
	{
		index_allocation(*a);
		radix_sort(a, b);
	}
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	if (argc <= 1)
		return (0);
	if (!parse_args_to_stack(argc, argv, &a))
	{
		ft_putstr_fd("Error\n", 2);
		lst_clear(&a);
		return (1);
	}
	if (!is_sorted(a))
		sort(&a, &b);
	lst_clear(&a);
	lst_clear(&b);
	return (0);
}
