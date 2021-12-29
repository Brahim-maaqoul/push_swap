/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_a.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 00:06:47 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/29 16:44:07 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*swap_a(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
	return (*head);
}
