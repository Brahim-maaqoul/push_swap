/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_b.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:44:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:45:15 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_b(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = last;
	last->next = *head;
	*head = (*head)->next;
	ft_putstr("rb\n");
}