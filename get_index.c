/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_index.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:43:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/30 14:43:23 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_index(t_list **head)
{
	t_list	*prev;
	int		i;
	int		j;

	prev->next = *head;
	prev = prev->next;
	if ((*head)->next == NULL)
		return (0);
	*head = (*head)->next;
	i = 1;
	j = 0;
	while (*head)
	{
		if ((*head)->num < prev->num)
		{
			prev->num = (*head)->num;
			j = i;
		}
		*head = (*head)->next;
		i++;
	}
	return (j);
}

#include <stdio.h>

int main(void)
{
	t_list	*node;

	node = ft_lstnew(1);
	node->next = ft_lstnew(0);
	node->next->next = ft_lstnew(-50000);
	 node->next->next->next = ft_lstnew(1000);
	 node->next->next->next->next = ft_lstnew(-222111);
	 node->next->next->next->next->next = ft_lstnew(-222111);
	 printf("%d\n", node->num);
	 printf("%d\n", node->next->num);
	printf("%d\n", node->next->next->num);
	 printf("%d\n", node->next->next->next->num);
	 printf("%d\n", node->next->next->next->next->num);
	 printf("%d\n",node->next->next->next->next->next->num);
	printf("\n%d\n", get_index(&node));
}