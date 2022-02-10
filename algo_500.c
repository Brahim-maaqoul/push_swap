/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   algo_500.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 02:37:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/11 00:44:49 by bmaaqoul         ###   ########.fr       */
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
			rotate_a(a);
	}
	else
	{
		while(i++ <= ft_lstsize(*a))
			rev_rotate_a(a);
	}
	push_b(b, a);
}

static void	part_b(t_list **a, t_list **b)
{
	int	i;

	i = get_big(b);
	if (i <= (ft_lstsize(*b) / 2))
	{
		while (i-- > 1)
			rotate_b(b);
	}
	else
	{
		while (i++ <= ft_lstsize(*b))
			rev_rotate_b(b);
	}
	push_a(a, b);
}

void	algo_500(t_list **a, t_list **b)
{
	int	i;
	int	len;
	int	len1;
	int	*tab;

	i = 1;
	len1 = ft_lstsize(*a);
	len = ft_lstsize(*a) / 12;
	tab = list_to_tab(a);
	while (i < 12)
	{
		push_parts(a, b, tab[(len1 * i / 12) - 1]);
		i++;
	}
	while (ft_lstsize(*a))
		part_a(a, b);
	while (len--)
		push_a(a, b);
	while (ft_lstsize(*b))
		part_b(a, b);
	free (tab);
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
// 	node->next->next->next->next->next->next->next->next->next = ft_lstnew(-8);
// 	node->next->next->next->next->next->next->next->next->next->next = ft_lstnew(13);
// 	node->next->next->next->next->next->next->next->next->next->next->next = ft_lstnew(-100);
// 	//node->next->next->next->next->next->next->next->next->next->next->next->next = ft_lstnew(20);
// 	algo_500(&node, &b);
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