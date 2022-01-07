/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:47:41 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/07 04:12:34 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

char    **ft_get_line(char **argv, int argc)
{
    char    *tmp;
    char    *tmp1;
    char    *str;
    char    **split;
    int        j;

    j = 0;
    tmp = NULL;
    str = NULL;
    while (++j < argc)
    {
        if (!str)
            str = ft_strjoin(argv[j], " ");
        else
        {
            tmp = str;
            tmp1 = ft_strjoin(argv[j], " ");
            str = ft_strjoin(str, tmp1);
            free(tmp);
            free(tmp1);
        }
    }
    split = ft_split(str, ' ');
    free(str);
    return (split);
}

char	**check_error(char **str, int argc)
{
    int        i;
    char    **argv;

    argv = ft_get_line(str, argc);
    i = 0;
    if (!argv)
       put_err();
    while (argv[i])
    {
        if (ft_atoi(argv[i]) == 0)
           	put_err();
        i++;
    }
   return (argv);
}
t_list	*ft_contain(char **av, int ac)
{
	t_list	*stack;
	char	**str;
	int		i;

	i = 1;
	str = check_error(av, ac);
	while (*str)
	{
		stack = ft_lstnew(ft_atoi(*str));
		ft_putnbr(stack->num);
		if (!stack)
		{
			free (stack);
			return (NULL);
		}
		stack = stack->next;
		str++;
	}
		//printf("%d\n", stack->num);
	return (stack);
}
int main(int ac, char **av)
{
	
}