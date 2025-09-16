/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:39:51 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/16 15:04:50 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include <limits.h>
# include "../lib/libft/include/libft.h"
# include "../lib/printf/include/ft_printf.h"

// stack init
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// args_handling
int		parse_args_to_stack(int argc, char **argv, t_list **a);
int		is_valid_input(const char *str, long *val);
int		is_valid_number(const char *str);
int		atoi_long(const char *s, long *out);
int		has_duplicates(t_list *a);

// list_helpers
t_list	*lst_new(int value);
int		lst_size(t_list *head);
t_list	*lst_last(t_list *head);
t_list	*lst_before_last(t_list *head);
void	lst_add_front(t_list **head, t_list *node);
void	lst_add_back(t_list **head, t_list *node);
void	lst_clear(t_list **head);
t_list	*lst_pop_front(t_list **head);

// stack_operations
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);

// sort_utils
int		is_sorted(t_list *head);
int		get_max_bits(t_list *a);
void	index_sort(int *array, int n);

// radix_sort
void	radix_sort(t_list **a, t_list **b);
void	index_allocation(t_list *a);

#endif
