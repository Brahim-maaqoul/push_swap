/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:47:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/12 03:34:25 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ss(t_list **stack_a, t_list **stack_b, int i)
{
	if (!*stack_a || !*stack_b || !(*stack_a)->next
		 || !(*stack_b)->next)
		return ;
	swap_a(stack_a, 0);
	swap_b(stack_b, 0);
	if (i == 1)
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