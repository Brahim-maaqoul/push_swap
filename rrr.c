/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:46:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 19:21:19 by bmaaqoul         ###   ########.fr       */
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
	if (!*stack_a || !*stack_b || !(*stack_a)->next
		 || !(*stack_b)->next)
		return ;
	rra(stack_a);
	rrb(stack_b);
	ft_putstr("rrr\n");
}