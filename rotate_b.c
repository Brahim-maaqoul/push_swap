/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:44:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/10 23:37:49 by bmaaqoul         ###   ########.fr       */
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
	last->next->next = NULL;
	ft_putstr("rb\n");
}