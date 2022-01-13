/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:44:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/13 14:44:15 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **head)
{
	t_list	*b;
	t_list	*last;

	if (!*head)
		return ;
	b = *head;
	*head = (*head)->next;
	last = ft_lstlast(b);
	last->next = b;
	b->next = NULL;
	ft_putstr("rb\n");
}