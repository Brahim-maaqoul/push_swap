/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:20:43 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 14:20:43 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*pt;
	size_t	j;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_strdup(""));
	pt = (char *) malloc(sizeof(char) * (len + 1));
	if (!pt)
		return (NULL);
	j = 0;
	while (s[start] && j < len)
	{
		pt[j] = s[start];
		j++;
		start++;
	}
	pt[j] = 0;
	return (pt);
}
