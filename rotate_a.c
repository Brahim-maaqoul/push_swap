/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 02:41:42 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/13 17:54:19 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head)
{
	t_list	*a;
	t_list	*last;

	if (!*head)
		return ;
	a = *head;
	*head = (*head)->next;
	last = ft_lstlast(a);
	last->next = a;
	last->next->next = NULL;
	ft_putstr("ra\n");
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;
// 	t_list	*b;

// 	node = ft_lstnew(2);
// 	node->next = ft_lstnew(3);
// 	node->next->next = ft_lstnew(1);
// 	node->next->next->next = ft_lstnew(4);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n", node->next->next->num);
// 	printf("%d\n", node->next->next->next->num);
// 	push_b(&b, &node);
// 	rotate_a(&node);
// 	printf("%d\n", b->num);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n", node->next->next->num);
// 	// printf("%d\n", node->next->next->next->num);
// 	 //printf("%d\n", node->next->next->next->next->num);
// }