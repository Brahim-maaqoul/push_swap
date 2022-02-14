/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_sorted.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 21:55:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:17:25 by bmaaqoul         ###   ########.fr       */
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
