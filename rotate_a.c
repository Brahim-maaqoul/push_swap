/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotate_a.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/31 02:41:42 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/15 23:06:44 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rotate_a(t_list **head, int i)
{
	t_list	*a;
	t_list	*last;

	if (!head || !*head)
		return ;
	a = *head;
	*head = (*head)->next;
	last = ft_lstlast(a);
	last->next = a;
	a->next = NULL;
	if (i == 1)
		ft_putstr("ra\n");
}
