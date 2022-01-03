/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:30:28 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:42:59 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_b(t_list **stack_b, t_list **stack_a)
{
	t_list	*tmp;

	if (!*stack_b || !*stack_a)
		return ;
	tmp = *stack_a;
	*stack_a = (*stack_a)->next;
	ft_lstadd_front(stack_b, tmp);
	ft_putstr("pb\n");
}