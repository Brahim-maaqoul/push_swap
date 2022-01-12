/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_3.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/12 06:10:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/12 06:11:44 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	check_3(t_list **a, t_list *sec, t_list *last)
{
	if (((*a)->num < sec->num) && ((*a)->num < last->num) 
		 	&& (sec->num > last->num))
		{
			rev_rotate_a(a);
			swap_a(a);
		}
		else if (((*a)->num > sec->num) && ((*a)->num > last->num) 
			&& (sec->num > last->num))
		{
			rotate_a(a);
			swap_a(a);
		}
		else if (((*a)->num < sec->num) && ((*a)->num > last->num) 
			&& (sec->num > last->num))
			rev_rotate_a(a);
		else if (((*a)->num > sec->num) && ((*a)->num < last->num))
			swap_a(a);
		else if (((*a)->num > sec->num) && ((*a)->num > last->num) 
			&& (sec->num < last->num))
			rotate_a(a);
}
void	algo_3(t_list **a)
{
	t_list	*last;
	t_list	*second;

	if (!*a || !(*a)->next)
		return ;
	second = (*a)->next;
	last = ft_lstlast(*a);
	if (ft_lstsize(*a) == 2)
		swap_a(a);
 	else
	{
		check_3(a, second, last);
	}
}