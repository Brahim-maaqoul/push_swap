/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 00:06:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/15 23:03:57 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **head, int i)
{
	int	tmp;

	if (!head || !*head)
		return ;
	tmp = (*head)->next->num;
	(*head)->next->num = (*head)->num;
	(*head)->num = tmp;
	if (i == 1)
		ft_putstr("sa\n");
}
