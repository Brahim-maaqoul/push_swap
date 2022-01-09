/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 02:41:42 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 19:19:18 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	if (!*head || !(*head)->next)
		return ;
	last = ft_lstlast(*head);
	tmp = last;
	last->next = *head;
	*head = (*head)->next;
	ft_putstr("ra\n");
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
// 	rotate_a(&node);
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n\n", node->next->next->num);
// }