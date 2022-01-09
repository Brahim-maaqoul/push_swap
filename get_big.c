/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_big.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:15:28 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 00:28:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_big(t_list *head)
{
	t_list	*prev;
	int		i;
	int		j;

	prev = head;
	if (head->next == NULL)
		return (1);
	head = head->next;
	i = 2;
	j = 1;
	while (head)
	{
		if (head->num > prev->num)
		{
			prev->num = head->num;
			j = i;
		}
		head = head->next;
		i++;
	}
	return (j);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(1);
// 	node->next = ft_lstnew(222222222);
// 	node->next->next = ft_lstnew(5000000000);
// 	//  node->next->next->next = ft_lstnew(1000);
// 	//  node->next->next->next->next = ft_lstnew(-222111);
// 	//  node->next->next->next->next->next = ft_lstnew(-2221111);
// 	//  printf("%d\n", node->num);
// 	//  printf("%d\n", node->next->num);
// 	// printf("%d\n", node->next->next->num);
// 	//  printf("%d\n", node->next->next->next->num);
// 	//  printf("%d\n", node->next->next->next->next->num);
// 	//  printf("%d\n",node->next->next->next->next->next->num);
// 	printf("\n%d\n", get_big(&node));
// }