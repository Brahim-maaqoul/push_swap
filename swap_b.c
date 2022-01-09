/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:19:09 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/09 19:18:49 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **head)
{
	int	tmp;

	if (!*head || !(*head)->next)
		return ;
	tmp = (*head)->next->num;
	(*head)->next->num = (*head)->num;
	(*head)->num = tmp;
	ft_putstr("sb\n");
}
