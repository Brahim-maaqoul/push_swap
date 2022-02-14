/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_pos.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/16 22:55:11 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:22:05 by bmaaqoul         ###   ########.fr       */
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
