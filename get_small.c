/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:43:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/13 14:46:40 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_small(t_list **head)
{
	t_list	*tmp;
	int		min;
	int		pos;

	pos = 1;
	tmp = *head;
	min = tmp->num;
	tmp = tmp->next;
	while (tmp)
	{
		if (min > tmp->num)
			min = tmp->num;
		tmp = tmp->next;
	}
	tmp = *head;
	while (tmp && min != tmp->num)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(-12222);
// 	node->next = ft_lstnew(-200042);
// 	node->next->next = ft_lstnew(50000000);
// 	//  node->next->next->next = ft_lstnew(1000);
// 	//  node->next->next->next->next = ft_lstnew(-222111);
// 	//  node->next->next->next->next->next = ft_lstnew(-2221111);
// 	printf("\n%d\n", get_small(node));
// 	 printf("%d\n", node->num);
// 	 printf("%d\n", node->next->num);
// 	printf("%d\n", node->next->next->num);
// 	//  printf("%d\n", node->next->next->next->num);
// 	//  printf("%d\n", node->next->next->next->next->num);
// 	//  printf("%d\n",node->next->next->next->next->next->num);
	
// }