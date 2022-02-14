/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_big.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/08 23:15:28 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:21:45 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_big(t_list **head)
{
	t_list	*tmp;
	int		min;
	int		pos;

	pos = 1;
	tmp = *head;
	min = tmp->num;
	tmp = tmp->next;
	while (tmp)
	{
		if (min < tmp->num)
			min = tmp->num;
		tmp = tmp->next;
	}
	tmp = *head;
	while (tmp && min != tmp->num)
	{
		pos++;
		tmp = tmp->next;
	}
	return (pos);
}
