/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 00:06:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:43:32 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_a(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
	ft_putstr("sa\n");
}
