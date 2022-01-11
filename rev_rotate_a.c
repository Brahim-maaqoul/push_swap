/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:20:06 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/11 01:20:52 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_list **a)
{
	t_list	*last;
	t_list	*head;
	t_list	*t;

	if (!a || !*a)
		return ;
	head = *a;
	last = ft_lstlast(head);
	t = ft_lstnew(last->num);
	ft_lstadd_front(a, t);
	head = *a;
	while (head->next != last)
		head = head->next;
	head->next = NULL;
	free (last);
	ft_putstr("rra\n");
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;
// 	t_list	*b;
// 	node = ft_lstnew(2);
// 	node->next = ft_lstnew(3);
// 	node->next->next = ft_lstnew(1);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n\n", node->next->next->num);
// 	push_b(&b, &node);
// 	rev_rotate_a(&node);
// 	printf("%d\n", b->num);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// }