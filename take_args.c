/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   take_args.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:47:41 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 23:21:44 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static char	**ft_get_line(char **argv, int argc)
{
	char	*tmp;
	char	*str;
	char	**split;
	char	*tmp2;
	int		j;

	j = 0;
	str = NULL;
	while (++j < argc)
	{
		if (!str)
			str = ft_strjoin(argv[j], " ");
		else
		{
			tmp = ft_strjoin(argv[j], " ");
			tmp2 = str;
			str = ft_strjoin(str, tmp);
			free(tmp2);
			free(tmp);
		}
	}
	split = ft_split(str, ' ');
	free(str);
	return (split);
}

static int	is_curr_str_int(char *str)
{
	int			i;
	long int	num;
	int			sign;

	i = 0;
	num = 0;
	sign = 1;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
			return (0);
		num = (num * 10) + (str[i] - '0');
		if ((num * sign) > INT_MAX || (num * sign) < INT_MIN)
			return (0);
		i++;
	}
	return (1);
}

static char	**check_error(char **str, int argc)
{
	int		i;
	char	**argv;

	argv = ft_get_line(str, argc);
	i = 0;
	if (!argv || !*argv)
		put_err();
	while (argv[i])
	{
		if (!is_curr_str_int(argv[i]))
		{
			free_tab(argv, i);
			put_err();
		}
		i++;
	}
	if (!ft_duplicate(argv))
		put_err();
	return (argv);
}

void	take_args(t_list **s, int ac, char **av)
{
	char	**tab;
	int		i;
	t_list	*a;

	tab = check_error(av, ac);
	i = 1;
	*s = ft_lstnew(ft_atoi(tab[0]));
	while (tab[i])
	{
		a = ft_lstnew(ft_atoi(tab[i]));
		ft_lstadd_back(s, a);
		i++;
	}
	free_tab(tab, i);
}
