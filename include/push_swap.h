/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:39:51 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 14:20:09 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdlib.h>
# include "../lib/libft/include/libft.h"
# include "../lib/printf/include/ft_printf.h"

// stack init
typedef struct s_list
{
	int				value;
	int				index;
	struct s_list	*next;
}				t_list;

// error handling
void	ft_print_error(void);

// list_helper
t_list	*lst_new(int value);
int		lst_size(t_list *head);
t_list	*lst_last(t_list *head);
t_list	*lst_before_last(t_list *head);
void	lst_add_front(t_list **head, t_list *node);
void	lst_add_back(t_list **head, t_list *node);
void	lst_clear(t_list **head);
t_list	*lst_pop_front(t_list **head);

#endif
