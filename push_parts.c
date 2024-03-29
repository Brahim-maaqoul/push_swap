/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_parts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 00:55:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:22:58 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_parts(t_list **a, t_list **b, int key_nbr)
{
	t_list	*tmp;
	int		pos;

	tmp = *a;
	while (tmp)
	{
		if (tmp->num <= key_nbr)
		{
			pos = get_pos(a, tmp->num);
			if (get_pos(a, tmp->num) <= (ft_lstsize(*a) / 2))
			{
				while (pos-- > 1)
					rotate_a(a, 1);
			}
			else
			{
				while (pos++ <= ft_lstsize(*a))
					rev_rotate_a(a, 1);
			}
			push_b(b, a, 1);
			tmp = *a;
			continue ;
		}
		tmp = tmp->next;
	}
}
