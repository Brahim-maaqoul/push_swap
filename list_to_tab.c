/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list_to_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 21:42:37 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/15 15:15:45 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_tab(int *tab, int s)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	while (i < s)
	{
		j = i + 1;
		while (j < s)
		{
			if (tab[j] < tab[i])
			{
				a = tab[j];
				tab[j] = tab[i];
				tab[i] = a;
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
