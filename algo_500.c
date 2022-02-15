/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 02:37:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/15 15:22:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	part_a(t_list **a, t_list **b)
{
	int	i;

	i = get_small(a);
	if (i <= (ft_lstsize(*a) / 2))
	{
		while (i-- > 1)
			rotate_a(a, 1);
	}
	else
	{
		while (i++ <= ft_lstsize(*a))
			rev_rotate_a(a, 1);
	}
	push_b(b, a, 1);
}

static void	part_b(t_list **a, t_list **b)
{
	int	i;

	i = get_big(b);
	if (i <= (ft_lstsize(*b) / 2))
	{
		while (i-- > 1)
			rotate_b(b, 1);
	}
	else
	{
		while (i++ <= ft_lstsize(*b))
			rev_rotate_b(b, 1);
	}
	push_a(a, b, 1);
}

void	algo_500(t_list **a, t_list **b)
{
	int	i;
	int	len;
	int	*tab;

	i = 1;
	len = ft_lstsize(*a);
	tab = list_to_tab(a);
	while (i < 12)
	{
		push_parts(a, b, tab[(len * i / 12) - 1]);
		i++;
	}
	while (ft_lstsize(*a))
		part_a(a, b);
	while (ft_lstsize(*b))
		part_b(a, b);
	free (tab);
}
