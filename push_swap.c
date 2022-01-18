/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 02:42:29 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/18 04:41:56 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

int	main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;

	a = stack_aloc(a);
	b = stack_aloc(b);
	if (ac > 1)
	{
		take_args(a, ac, av);
		if (ft_check_sorted(a))
		{
			free_list(a);
			return (0);
		}
		sort_all(a, b);
	}
	free_list(a);
	free_list(b);
	return (0);
}