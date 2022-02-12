/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:30:28 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/12 03:29:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **stack_b, t_list **stack_a, int i)
{
	t_list	*tmp;

	if (!*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, tmp);
	if (i == 1)
		ft_putstr("pb\n");
}
// #include <stdio.h>

// int main(void)
// {
// 	t_list	*a;
// 	t_list	*b;

// 	a = ft_lstnew(1);
// 	a->next = ft_lstnew(2);
// 	a->next->next = ft_lstnew(3);
// 	push_b(&b, &a);
// 	printf("%d\n", a->num);
// 	printf("%d\n",a->next->num);
// 	printf("%d\n", b->num);
// 	push_a(&a, &b);
// 	printf("%d\n", a->num);
// 	printf("%d\n",a->next->num);
// 	printf("%d\n", a->next->next->num);
// 	printf("%d\n", b->num);
// }