/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:43:17 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/10 23:38:36 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	ra(t_list **head)
{
	t_list	*a;
	t_list	*last;

	if (!*head)
		return ;
	a = *head;
	*head = (*head)->next;
	last = ft_lstlast(a);
	last->next = a;
	last->next->next = NULL;
}

static void	rb(t_list **head)
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