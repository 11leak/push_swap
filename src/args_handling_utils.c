/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   args_handling_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 13:27:39 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/15 13:51:07 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_valid_input(const char *str, long *val)
{
	if (!is_valid_number(str))
		return (0);
	if (!atoi_long(str, val))
		return (0);
	if (*val < INT_MIN || *val > INT_MAX)
		return (0);
	return (1);
}

int	is_valid_number(const char *str)
{
	int	i;

	i = 0;
	if (!str || !str[i])
		return (0);
	if (str[i] == '-' || str[i] == '+')
		i++;
	if (!str[i])
		return (0);
	while (str[i])
	{
		if (str[i] < '0' || str[i] > '9')
			return (0);
		i++;
	}
	return (1);
}

int	has_duplicates(t_list *a)
{
	t_list	*outer;
	t_list	*inner;

	outer = a;
	while (outer && outer->next)
	{
		inner = outer->next;
		while (inner)
		{
			if (outer->value == inner->value)
				return (1);
			inner = inner->next;
		}
		outer = outer->next;
	}
	return (0);
}

int	atoi_long(const char *s, long *out)
{
	int		i;
	int		sign;
	long	acc;

	i = 0;
	sign = 1;
	acc = 0;
	if (s[i] == '+' || s[i] == '-')
	{
		atoi_long_util(&sign, s[i]);
		i++;
	}
	if (!s[i])
		return (0);
	while (s[i] >= '0' && s[i] <= '9')
	{
		if (acc > (LONG_MAX - (s[i] - '0')) / 10)
			return (0);
		acc = acc * 10 + (s[i] - '0');
		i++;
	}
	if (s[i] != '\0')
		return (0);
	*out = acc * sign;
	return (1);
}

void	atoi_long_util(int *sign, char c)
{
	if (c == '-')
		*sign = -1;
}
