/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 06:12:18 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:11:46 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_5(t_list **a, t_list	**b)
{
	int	i;

	i = 1;
	if (get_small(a) <= 2)
	{
		while (i < get_small(a))
		{	
			rotate_a(a, 1);
			i++;
		}
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

void	algo_5(t_list **a, t_list	**b)
{	
	check_5(a, b);
	if (ft_lstsize(*a) == 4)
		check_5(a, b);
	algo_3(a);
	while (ft_lstsize(*b))
		push_a(a, b, 1);
}
