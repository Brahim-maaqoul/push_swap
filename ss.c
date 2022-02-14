/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ss.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:47:39 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:37:18 by bmaaqoul         ###   ########.fr       */
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
