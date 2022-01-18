/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/17 04:23:08 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/18 02:37:08 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"


static void	sort_tab(int *tab, int s)
{
	int	i;
	int	j;

	i = 0;
	while (i < s)
	{
		j = 0;
		while (j < s - 1)
		{
			if (tab[j] > tab[j + 1])
			{
				s = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = s;
			}
			j++;
		}
		i++;
	}
}
int	*list_to_tab(t_list **a)
{
	int		*tab;
	t_list	*tmp;
	int		i;

	i = 0;
	tab = malloc(ft_lstsize(*a) * sizeof(int));
	tmp = *a;
	while (tmp)
	{
		tab[i] = tmp->num;
		tmp = tmp->next;
		i++;
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