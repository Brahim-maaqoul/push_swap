/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_b.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 23:45:38 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:46:01 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_b(t_list **head)
{
	t_list	*tmp;
	t_list	*last;

	last = ft_lstlast(*head);
	tmp = *head;
	*head = last;
	last->next = tmp;
	ft_putstr("rrb\n");
}