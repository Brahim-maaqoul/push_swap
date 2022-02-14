/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_rotate_a.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/29 20:20:06 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:32:47 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rev_rotate_a(t_list **a, int i)
{
	t_list	*last;
	t_list	*head;
	t_list	*t;

	if (!a || !*a)
		return ;
	head = *a;
	last = ft_lstlast(head);
	t = ft_lstnew(last->num);
	ft_lstadd_front(a, t);
	head = *a;
	while (head->next != last)
		head = head->next;
	head->next = NULL;
	free (last);
	if (i == 1)
		ft_putstr("rra\n");
}
