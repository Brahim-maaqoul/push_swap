/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 02:41:42 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/31 03:11:20 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*rotate_a(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	if (ft_lstsize(*head) == 1)
		return (*head);
	tmp = last;
	last->next = *head;
	*head = (*head)->next;
	return (*head);
}

#include <stdio.h>

int main(void)
{
	t_list	*node;

	node = ft_lstnew(2);
	node->next = ft_lstnew(3);
	node->next->next = ft_lstnew(1);
	printf("%d\n", node->num);
	printf("%d\n", node->next->num);
	printf("%d\n\n", node->next->next->num);
	rotate_a(&node);
	printf("%d\n", node->num);
	printf("%d\n", node->next->num);
	printf("%d\n", node->next->next->num);
}