/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:28:58 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:12:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_10(t_list **a, t_list **b)
{
	int	i;

	i = 1;
	if ((ft_lstsize(*a) / 2) > get_small(a))
	{
		while (i < get_small(a))
		{
			rotate_a(a, 1);
			i++;
		}
		if (get_small(a) == 1)
			push_b(b, a, 1);
	}
	else
	{
		while (i <= get_small(a))
		{
			rev_rotate_a(a, 1);
			i++;
		}
		push_b(b, a, 1);
	}
}

void	algo_10(t_list **a, t_list **b)
{
	while (ft_lstsize(*a) > 3)
		check_10(a, b);
	algo_3(a);
	while (*b)
		push_a(a, b, 1);
}
