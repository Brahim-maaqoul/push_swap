/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:47:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/05 21:58:13 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sa(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
}

static void	sb(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b)
		return ;
	sa(stack_a);
	sb(stack_b);
	ft_putstr("ss\n");
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list *stack_a;
// 	t_list *stack_b;

// 	stack_a = ft_lstnew(1);
// 	stack_a->next = ft_lstnew(2);
// 	stack_b = ft_lstnew(10);
// 	stack_b->next = ft_lstnew(20);
// 	ss(&stack_a, &stack_b);
// 	printf ("%d\n", stack_a->num);
// 	printf ("%d\n", stack_a->next->num);
// 	printf ("%d\n", stack_b->num);
// 	printf ("%d\n", stack_b->next->num);
// }