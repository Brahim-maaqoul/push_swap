/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:43:17 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 19:21:09 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ra(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = last;
	last->next = *head;
	*head = (*head)->next;
}

static void	rb(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = last;
	last->next = *head;
	*head = (*head)->next;
}

void	rr(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b || !(*stack_a)->next
		 || !(*stack_b)->next)
		return ;
	ra(stack_a);
	rb(stack_b);
	ft_putstr("rr\n");
}