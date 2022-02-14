/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_all.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:33:59 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:37:02 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort_all(t_list **a, t_list **b)
{
	if (ft_lstsize(*a) == 2 || ft_lstsize(*a) == 3)
		algo_3(a);
	else if (ft_lstsize(*a) == 4 || ft_lstsize(*a) == 5)
		algo_5(a, b);
	else if (ft_lstsize(*a) > 5 && ft_lstsize(*a) <= 10)
		algo_10(a, b);
	else if (ft_lstsize(*a) > 10 && ft_lstsize(*a) <= 100)
		algo_100(a, b);
	else if (ft_lstsize(*a) > 100 && ft_lstsize(*a) <= 500)
		algo_500(a, b);
}
