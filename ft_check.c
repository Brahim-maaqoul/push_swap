/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:55:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/05 23:12:41 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_check(t_list **head)
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
			if (prev->num > (*head)->num)
				return (0);
			*head = (*head)->next;
		}
		prev = prev->next;
	}
	return (1);
}
