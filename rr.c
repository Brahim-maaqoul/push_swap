/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rr.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/04 03:43:17 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/15 23:05:57 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rr(t_list **stack_a, t_list **stack_b, int i)
{
	if (!stack_a || !*stack_a || !stack_b
		|| !*stack_b)
		return ;
	rotate_a(stack_a, 0);
	rotate_b(stack_b, 0);
	if (i == 1)
		ft_putstr("rr\n");
}
