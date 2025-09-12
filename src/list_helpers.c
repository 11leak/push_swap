/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_helper.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dwotsche <dwotsche@student.42wolfsburg.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/11 13:17:50 by dwotsche          #+#    #+#             */
/*   Updated: 2025/09/12 14:27:18 by dwotsche         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// neue Liste mit wert value / index 0 / next NULL
t_list	*lst_new(int value)
{
	t_list	*node;

	node = (t_list *)malloc(sizeof(t_list));
	if (!node)
		return (NULL);
	node->value = value;
	node->index = 0;
	node->next = NULL;
	return (node);
}

// Gibt die Anzahl der Elemente wieder
int	lst_size(t_list *head)
{
	int	i;

	i = 0;
	while (head)
	{
		i++;
		head = head->next;
	}
	return (i);
}

// Gibt letzte Node zurück
t_list	*lst_last(t_list *head)
{
	if (!head)
		return (NULL);
	while (head->next)
		head = head->next;
	return (head);
}

// Gibt die vorletzte Node zurück
t_list	*lst_before_last(t_list *head)
{
	if (!head || !head->next)
		return (NULL);
	while (head->next && head->next->next)
		head = head->next;
	return (head);
}

// Fügt node am Anfang (als neuen Head) ein
void	lst_add_front(t_list **head, t_list *node)
{
	if (!head || !node)
		return ;
	node->next = *head;
	*head = node;
}

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
	t_list *node;

	if (head == NULL || *head == NULL)
		return (NULL);
	node = *head;
	*head = node->next;
	node->next = NULL;
	return (node);
}
