/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:20:06 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:43:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = *head;
	*head = last;
	last->next = tmp;
	ft_putstr("rra\n");
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(2);
// 	node->next = ft_lstnew(3);
// 	node->next->next = ft_lstnew(1);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n\n", node->next->next->num);
// 	rev_rotate_a(&node);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n", node->next->next->num);
// }