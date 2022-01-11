/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrr.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:46:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/11 01:33:19 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	rra(t_list **a)
{
	t_list	*last;
	t_list	*head;
	t_list	*t;

	if (!a || !*a)
		return ;
	head = *a;
	last = ft_lstlast(head);
	t = ft_lstnew(last->num);
	ft_lstadd_front(a, t);
	head = *a;
	while (head->next != last)
		head = head->next;
	head->next = NULL;
	free (last);
}

void	rrb(t_list **b)
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