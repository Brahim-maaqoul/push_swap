/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/01 14:32:03 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/08 18:50:58 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_a(t_list **stack_a, t_list **stack_b)
{
	t_list	*tmp;

	if (!*stack_b)
		return ;
	tmp = *stack_b;
	*stack_b = (*stack_b)->next;
	ft_lstadd_front(stack_a, tmp);
	ft_putstr("pa\n");
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*stack_a;
// 	t_list	*stack_b;

// 	stack_a = ft_lstnew(4);
// 	stack_b = ft_lstnew(1);
// 	stack_b->next = ft_lstnew(2);
// 	stack_b->next->next = ft_lstnew(3);
// 	push_a(&stack_a, &stack_b);
// 	push_a(&stack_a, &stack_b);
// 	push_a(&stack_a, &stack_b);
// 	// ft_lstadd_front(&stack_a, stack_b);
// 	printf("%d\n", stack_a->num);
// 	printf("%d\n", stack_a->next->num);
// 	 printf("%d\n", stack_a->next->next->num);
// 	 printf("%d\n", stack_a->next->next->next->num);
// }