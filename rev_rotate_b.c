/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:45:38 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/11 01:21:00 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **b)
{
	t_list	*last;
	t_list	*head;
	t_list	*t;

	if (!b || !*b)
		return ;
	head = *b;
	last = ft_lstlast(head);
	t = ft_lstnew(last->num);
	ft_lstadd_front(b, t);
	head = *b;
	while (head->next != last)
		head = head->next;
	head->next = NULL;
	free (last);
	ft_putstr("rrb\n");
}