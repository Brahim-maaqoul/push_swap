/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:38:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/03 23:54:58 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

typedef struct s_stack{
	int				num;
	struct s_stack	*next;
}				t_list;

void	swap_a(t_list **head);
void	swap_b(t_list **head);
void	rotate_a(t_list **head);
void	rotate_b(t_list **head);
void	rev_rotate_a(t_list **head);
void	rev_rotate_b(t_list **head);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_b, t_list **stack_a);
void	ss(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
void	ft_putstr(char *str);

#endif