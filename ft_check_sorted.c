/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:55:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 23:40:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check_sorted(t_list **head)
{
	t_list	*prev;
	t_list	*tmp;

	if (!*head)
		return (0);
	prev = *head;
	tmp = *head;
	while (prev)
	{
		tmp = prev->next;
		while (tmp)
		{
			if (prev->num > tmp->num)
				return (0);
			tmp = tmp->next;
		}
		prev = prev->next;
	}
	return (1);
}

// #include <stdio.h>
// int main(void)
// {
// 	t_list	*node;

// 	node = ft_lstnew(1);
// 	node->next = ft_lstnew(3);
// 	node->next->next = ft_lstnew(2);
// 	printf("%d\n", ft_check_sorted(&node));
// 	printf("%d\n", node->num);
// 	printf("%d\n", node->next->num);
// 	printf("%d\n", node->next->next->num);
// }