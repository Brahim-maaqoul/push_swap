/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_parts.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 00:55:01 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/19 02:31:07 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push_parts(t_list **a, t_list **b, int key_nbr)
{
	t_list	*tmp;
	int		pos;
	int		len;

	pos = 1;
	len = ft_lstsize(*a) / 2;
	tmp = *a;
	while (tmp)
	{
		if (tmp->num <= key_nbr)
		{
			pos = get_pos(a, tmp->num);
			if (get_pos(a, tmp->num) <= len)
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