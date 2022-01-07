/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_contain.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/05 23:47:41 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/07 22:21:42 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

char    **ft_get_line(char **argv, int argc)
{
    char    *tmp1;
    char    *str;
    char    **split;
    int        j;

    j = 0;
    str = NULL;
    while (++j < argc)
    {
        if (!str)
            str = ft_strjoin(argv[j], " ");
        else
        {
            tmp1 = ft_strjoin(argv[j], " ");
            str = ft_strjoin(str, tmp1);
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
        if (!ft_isdigit(argv[i]))
           	put_err();
        i++;
    }
   return (argv);
}

void    fillstack(t_list **s, int ac, char **av)
{
    char    **tab;
    int        i;
    t_list    *a;

    i = 0;
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
int main(int ac, char **av)
{
    t_list  *a;
    fillstack(&a, ac, av);
    printf("%d\n", a->num);
    printf("%d\n", a->next->num);
    printf("%d\n", a->next->next->num);
    swap_a(&a);
    printf("%d\n", a->num);
    printf("%d\n", a->next->num);
    printf("%d\n", a->next->next->num);
}