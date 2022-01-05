/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_duplicate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:09:38 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/05 23:12:29 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_duplicate(t_list **head)
{
	t_list	*prev;

	if (!*head)
		return (0);
	prev = *head;
	while (prev)
	{
		*head = prev->next;
		while (*head)
		{
			if (prev->num == (*head)->num)
				return (0);
			*head = (*head)->next;
		}
		prev = prev->next;
	}
	return (1);
}
