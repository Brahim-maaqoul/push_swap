/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_args.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 23:04:55 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 23:22:51 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	check_args(char **av)
{
	int	i;
	int	j;
	int	boool;

	i = 1;
	while (av[i])
	{
		if (av[i][0] == '\0')
			put_err();
		j = 0;
		boool = 1;
		while (av[i][j])
		{
			if (ft_isdigit(av[i][j]))
				boool = 0;
			j++;
		}
		if (boool)
			put_err();
		i++;
	}
}
