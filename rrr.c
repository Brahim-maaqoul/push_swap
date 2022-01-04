/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:46:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/04 03:49:04 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rra(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = *head;
	*head = last;
	last->next = tmp;
}

void	rrb(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = *head;
	*head = last;
	last->next = tmp;
}

void	rrr(t_list **stack_a, t_list **stack_b)
{
	rra(stack_a);
	rrb(stack_b);
	ft_putstr("rrr\n");
}