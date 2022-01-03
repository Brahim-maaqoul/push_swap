/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:19:09 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:43:48 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	swap_b(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
	ft_putstr("sb\n");
}
