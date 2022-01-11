/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:38:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/01/11 00:57:12 by bmaaqoul         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include <unistd.h>
# include <stdlib.h>
# include <fcntl.h>

# define INT_MAX 2147483647
# define INT_MIN -2147483648
typedef struct s_stack{
	int				num;
	struct s_stack	*next;
}				t_list;

void	free_tab(char **tab, int i);
void	swap_a(t_list **head);
void	swap_b(t_list **head);
void	rotate_a(t_list **head);
void	rotate_b(t_list **head);
void	rev_rotate_a(t_list **head);
void	rev_rotate_b(t_list **head);
void	push_a(t_list **stack_a, t_list **stack_b);
void	push_b(t_list **stack_b, t_list **stack_a);
void	ss(t_list **stack_a, t_list **stack_b);
void	rr(t_list **stack_a, t_list **stack_b);
void	rrr(t_list **stack_a, t_list **stack_b);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, void (*del)(void*));
void	ft_lstdelone(t_list *lst, void (*del)(void*));
void	put_err();
void	ft_putnbr(int n);
void	ft_putchar(char c);
void    take_args(t_list **s, int ac, char **av);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char	*str);
int		ft_check_sorted(t_list **head);
int	ft_duplicate(t_list **head);
int	ft_len_tabs(char **strs);
int	count_args(char *str, char c);
int	get_small(t_list **head);
int	get_big(t_list *head);
int	ft_isdigit(char *str);
void	ft_putstr(char *str);
size_t    ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);

#endif