/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:23:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/10 02:43:06 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	*list_to_tab(t_list **a)
{
	int		*tab;
	t_list	*tmp;
	int		i;

	i = 0;
	tmp = *a;
	tab = malloc(ft_lstsize(tmp) * sizeof(int));
	while (tmp)
	{
		tab[i++] = tmp->num;
		tmp = tmp->next;
	}
	sort_tab(tab, ft_lstsize(*a));
	return (tab);
}

// #include <stdio.h>

// int main(void)
// {
// 	t_list	*tmp;
// 	int		*tab;
// 	tmp = ft_lstnew(1);
// 	tmp->next = ft_lstnew(3);
// 	tmp->next->next = ft_lstnew(2);
// 	tab = list_to_tab(&tmp);
// 	int i = 0;
// 	while (tab[i])
// 	{
// 		printf("%d\n", tab[i]);
// 		i++;
// 	}
// }