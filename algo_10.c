/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_10.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 20:28:58 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/12 03:31:36 by bmaaqoul         ###   ########.fr       */
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

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;
// 	t_list	*b = NULL;
	
// 	node = ft_lstnew(5);
// 	node->next = ft_lstnew(4);
// 	node->next->next = ft_lstnew(2);
// 	node->next->next->next = ft_lstnew(1);
// 	node->next->next->next->next = ft_lstnew(6);
// 	node->next->next->next->next->next = ft_lstnew(10);
// 	node->next->next->next->next->next->next= ft_lstnew(12);
// 	node->next->next->next->next->next->next->next = ft_lstnew(9);
// 	node->next->next->next->next->next->next->next->next = ft_lstnew(7);
// 	node->next->next->next->next->next->next->next->next->next = ft_lstnew(8);
// 	node->next->next->next->next->next->next->next->next->next->next = ft_lstnew(13);
// 	node->next->next->next->next->next->next->next->next->next->next->next = ft_lstnew(100);
// 	//node->next->next->next->next->next->next->next->next->next->next->next->next = ft_lstnew(20);
// 	algo_10(&node, &b);
// 	// while (node)
// 	// {
// 	// 	printf("%d\n", node->num);
// 	// 	node = node->next;
// 	// }
// 	// printf("%d\n", node->num);
// 	// printf("%d\n", node->next->num);
// 	// printf("%d\n", node->next->next->num);
// 	// printf("%d\n", node->next->next->next->num);
// 	// printf("%d\n", node->next->next->next->next->num);
// 	// printf("%d\n", node->next->next->next->next->next->num);
// }