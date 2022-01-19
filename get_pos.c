/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:55:11 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/18 00:37:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_pos(t_list **a, int num)
{
	t_list	*tmp;
	int		i;

	i = 1;
	tmp = *a;
	while (tmp && num != tmp->num)
	{
		i++;
		tmp = tmp->next;
	}
	return (i);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(1);
// 	node->next = ft_lstnew(-3);
// 	node->next->next = ft_lstnew(2);
// 	printf("%d\n", get_pos(&node, -3));
// }