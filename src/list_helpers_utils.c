/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_helpers_utils.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 13:31:17 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/13 13:31:44 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*  Hängt node am Ende an. Setzt node->next = NULL.
    Wenn *head leer ist, wird node der neue Head. */
void	lst_add_back(t_list **head, t_list *node)
{
	t_list	*last;

	if (!head || !node)
		return ;
	if (!*head)
	{
		*head = node;
		node->next = NULL;
		return ;
	}
	last = lst_last(*head);
	last->next = node;
	node->next = NULL;
}

// komplette Liste freigeben und *head = NULL setzen
void	lst_clear(t_list **head)
{
	t_list	*current;
	t_list	*next_node;

	if (head == NULL)
		return ;
	current = *head;
	while (current)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
	*head = NULL;
}

// entfernt den ersten Knoten (Head) einer verketteten Liste und gibt ihn zurück
t_list	*lst_pop_front(t_list **head)
{
	t_list	*node;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	*head = node->next;
	node->next = NULL;
	return (node);
}
