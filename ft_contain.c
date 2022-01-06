/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:47:41 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/06 03:24:42 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>
void	*ft_contain(char **av)
{
	t_list	*stack;
	int		i;

	i = 1;
	while (av[i])
	{
		stack = ft_lstnew(ft_atoi(av[i]));
		printf("%d\n", stack->num);
		if (!stack)
		{
			free (stack);
			return (NULL);
		}
		stack = stack->next;
		i++;
	}
	return (stack);
}
int main(int ac, char **av)
{
	ft_contain(av);
}