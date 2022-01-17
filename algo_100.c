/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_100.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/14 19:17:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/17 03:11:38 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	part_a(t_list **a, t_list **b)
{
	int	i;

	i = get_small(a);
	if (i < (ft_lstsize(*a) / 2))
	{
		while (i-- > 1)
			rotate_a(a);
		push_b(b, a);
	}
	else
	{
		while(i++ <= ft_lstsize(*a))
			rev_rotate_a(a);
		push_b(b, a);
	}
}

static void	part_b(t_list **a, t_list **b)
{
	int	i;

	i = get_big(b);
	if (i < (ft_lstsize(*b) / 2))
	{
		while (i-- > 1)
			rotate_a(b);
		push_a(a, b);
	}
	else
	{
		while (i++ <= ft_lstsize(*b))
			rev_rotate_b(b);
		push_a(a, b);
	}
}

static void	push_parts(t_list **a, t_list **b, int key_nbr)
{
	t_list	*tmp;
	int		i;
	int		pos;

	i = 1;
	tmp = *a;
	while (tmp)
	{
		if (tmp->num <= key_nbr)
		{
			pos = get_pos(a, tmp->num);
			if (get_pos(a, tmp->num) < (ft_lstsize(*a) / 2))
			{
				while (pos-- > 1)
					rotate_a(a);
			}
			else
			{
				while (pos++ <= ft_lstsize(*a))
					rev_rotate_a(a);
			}
			push_b(b, a);
			tmp = *a;
			continue ;
		}
		tmp = tmp->next;
	}
}

void	algo_100(t_list **a, t_list **b)
{
	int	i;
	int	chunks;
	int	len;

	i = 1;
	len = ft_lstsize(*a);
	while (i < 4)
	{
		push_parts(a, b, (ft_lstsize(*a) * i) / 4);
		i++;
	}
	while (ft_lstsize(*a))
		part_a(a, b);
	while (len--)
		push_a(a, b);
	while (ft_lstsize(*b))
		part_b(a, b);
}