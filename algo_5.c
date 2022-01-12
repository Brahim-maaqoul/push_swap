/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_5.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 06:12:18 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/12 06:12:30 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_5(t_list **a, t_list	**b)
{
	int		i;
	int		mid;

	i = 1;
	if (get_small(a) <= 2)
	{
		while (i < get_small(a))
		{	
			rotate_a(a);
			i++;
		}
		push_b(b, a);
	}
	else
	{
		while (i <= get_small(a))
		{
			rev_rotate_a(a);
			i++;
		}
		push_b(b, a);
	}
	
}

void	algo_5(t_list **a, t_list	**b)
{	
	check_5(a, b);
	if (ft_lstsize(*a) == 4)
		check_5(a, b);
	algo_3(a);
	push_a(a, b);
	push_a(a, b);
}