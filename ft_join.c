/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_join.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 14:41:54 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/11 18:31:59 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_join(char *s1, char *s2)
{
	int		i;
	int		j;
	int		k;
	char	*t;

	if (!s1)
	{
		s1 = (char *) malloc(sizeof(char) * 1);
		s1[0] = '\0';
	}
	if (!s2)
		return (NULL);
	k = ft_strlen(s1) + ft_strlen(s2);
	i = -1;
	j = -1;
	t = (char *) malloc(sizeof(char) * k + 1);
	if (!t)
		return (NULL);
	while (s1[++i])
		t[i] = s1[i];
	while (s2[++j])
		t[i++] = s2[j];
	t[i] = '\0';
	free (s1);
	return (t);
}


