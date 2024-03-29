/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_small.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/30 13:43:04 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:22:17 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	get_small(t_list **head)
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
		if (min > tmp->num)
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
