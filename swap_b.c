/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_b.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:19:09 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/29 20:19:38 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	*swap_b(t_list **head)
{
	t_list	*tmp;

	tmp = *head;
	*head = (*head)->next;
	(*head)->next = tmp;
	return (*head);
}
