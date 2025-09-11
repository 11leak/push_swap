/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 11:39:51 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/11 14:45:58 by dwotsche         ###   ########.fr       */
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

#endif
