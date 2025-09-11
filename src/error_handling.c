/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_handling.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:55:00 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/11 12:14:00 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_print_error(void)
{
	ft_putstr_fd("Error\n", 1);
	exit(0);
}

int	ft_is_args_correct(int argc, char **argv)
{
	long	val;

	val = 0;
	if (argc != 2)
		return (0);
	val = ft_atoi(argv[1]);
	return (val);
}
