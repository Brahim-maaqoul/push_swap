/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_tab.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/19 20:12:56 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/19 20:13:20 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_tab(int *tab, int s)
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