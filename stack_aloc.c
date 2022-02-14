/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_aloc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:37:30 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:38:11 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_list	**stack_aloc(t_list **a)
{
	a = (t_list **)malloc(sizeof(t_list *));
	if (!a)
		return (NULL);
	*a = NULL;
	return (a);
}
