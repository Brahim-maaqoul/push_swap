/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:28:58 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 02:12:07 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

static void	check(t_list **a, t_list *sec, t_list *last)
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
static void	algo_3(t_list **a)
{
	t_list	*last;
	t_list	*second;

	second = (*a)->next;
	last = ft_lstlast(*a);
	if (ft_lstsize(*a) == 2)
	{
		if ((*a)->num > second->num)
			swap_a(a);
		exit (0);
	}
	 if (ft_lstsize(*a) == 3)
	 {
		check(a, second, last);
	 }
}


// void	algo_10(t_list *a)
// {
// 	t_list	*b;
	
// }

// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(2);
// 	node->next = ft_lstnew(3);
// 	node->next->next = ft_lstnew(1);
// 	algo_3(&node);
// }