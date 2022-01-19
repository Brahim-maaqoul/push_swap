/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/18 02:42:29 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/19 03:27:20 by bmaaqoul         ###   ########.fr       */
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
		//printf("NYO-HO");
		take_args(a, ac, av);
		if (ft_check_sorted(a))
		{
			free_list(a);
			return (0);
		}
		sort_all(a, b);
		// while (*a)
		// {
		// 	printf("%d\n", (*a)->num);
		// 	*a= (*a)->next;
		// }
		
	}
	free_list(a);
	free_list(b);
	return (0);
}