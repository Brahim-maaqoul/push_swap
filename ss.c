/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:47:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 19:20:53 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sa(t_list **head)
{
	int	tmp;

	tmp = (*head)->next->num;
	(*head)->next->num = (*head)->num;
	(*head)->num = tmp;
}

static void	sb(t_list **head)
{
	int	tmp;

	tmp = (*head)->next->num;
	(*head)->next->num = (*head)->num;
	(*head)->num = tmp;
}

void	ss(t_list **stack_a, t_list **stack_b)
{
	if (!*stack_a || !*stack_b || !(*stack_a)->next
		 || !(*stack_b)->next)
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