/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/11 19:02:06 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/12 21:28:35 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

static void	sort_op(t_list **a, t_list **b, char *line)
{
	if (!ft_strcmp(line, "sa\n"))
		swap_a(a, 0);
	else if (!ft_strcmp(line, "sb\n"))
		swap_b(b, 0);
	else if (!ft_strcmp(line, "ss\n"))
		ss(a, b, 0);
	else if (!ft_strcmp(line, "ra\n"))
		rotate_a(a, 0);
	else if (!ft_strcmp(line, "rb\n"))
		rotate_b(b, 0);
	else if (!ft_strcmp(line, "rr\n"))
		rr(a, b, 0);
	else if (!ft_strcmp(line, "rra\n"))
		rev_rotate_a(a, 0);
	else if (!ft_strcmp(line, "rrb\n"))
		rev_rotate_b(b, 0);
	else if (!ft_strcmp(line, "rrr\n"))
		rrr(a, b, 0);
	else if (!ft_strcmp(line, "pa\n"))
		push_a(a, b, 0);
	else if (!ft_strcmp(line, "pb\n"))
		push_b(b ,a, 0);
}

static void	check_op(t_list **a, t_list **b, char *line)
{
	if (ft_strcmp(line, "sa\n") && ft_strcmp(line, "sb\n")
		&& ft_strcmp(line, "ss\n") && ft_strcmp(line, "ra\n")
		&& ft_strcmp(line, "rb\n") && ft_strcmp(line, "rr\n")
		&& ft_strcmp(line, "rra\n") && ft_strcmp(line, "rrb\n")
		&& ft_strcmp(line, "rrr\n") && ft_strcmp(line, "pa\n")
		&& ft_strcmp(line, "pb\n"))
	{
		free_list(a);
		free_list(b);
		free (line);
		exit (1);
	}
	else
		sort_op(a, b, line);
}

static void	check_sorted(t_list **a, t_list **b)
{
	if (ft_check_sorted(a))
	{
		ft_putstr("OK\n");
		free_list(a);
		free_list(b);
		exit (0);
	}
	if (!ft_check_sorted(a))
	{
		ft_putstr("KO\n");
		free_list(a);
		free_list(b);
		exit (0);
	}
}

int main(int ac, char **av)
{
	t_list	**a;
	t_list	**b;
	char	*line;

	a = NULL;
	b = NULL;
	a = stack_aloc(a);
	b = stack_aloc(b);
	if (ac > 1)
	{
		take_args(a, ac, av);
		line = get_next_line(0);
		while (line)
		{
			check_op(a, b, line);
			free (line);
			line = get_next_line(0);
		}
		check_sorted(a, b);
	}
	free_list(a);
	free_list(b);
	return (0);
}