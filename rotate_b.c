/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:44:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/12 03:27:42 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **head, int i)
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
	if (i == 1)
		ft_putstr("rb\n");
}