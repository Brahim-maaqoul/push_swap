/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:38:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2022/02/14 23:08:32 by bmaaqoul         ###   ########.fr       */
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
void	free_list(t_list **stack);
void	swap_a(t_list **head, int i);
void	swap_b(t_list **head, int i);
void	rotate_a(t_list **head, int i);
void	rotate_b(t_list **head, int i);
void	rev_rotate_a(t_list **head, int i);
void	rev_rotate_b(t_list **head, int i);
void	push_a(t_list **stack_a, t_list **stack_b, int i);
void	push_b(t_list **stack_b, t_list **stack_a, int i);
void	ss(t_list **stack_a, t_list **stack_b, int i);
void	rr(t_list **stack_a, t_list **stack_b, int i);
void	rrr(t_list **stack_a, t_list **stack_b, int i);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	put_err(void);
void	ft_putnbr(int n);
void	take_args(t_list **s, int ac, char **av);
void	algo_3(t_list **a);
void	algo_5(t_list **a, t_list **b);
void	algo_10(t_list **a, t_list **b);
void	algo_100(t_list **a, t_list **b);
void	algo_500(t_list **a, t_list **b);
void	sort_all(t_list **a, t_list **b);
void	push_parts(t_list **a, t_list **b, int key_nbr);
void	free_list(t_list **stack);
void	check_args(char **av);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstnew(int content);
t_list	**stack_aloc(t_list **a);
int		ft_lstsize(t_list *lst);
int		ft_atoi(const char	*str);
int		ft_check_sorted(t_list **head);
int		ft_duplicate(char **av);
int		get_small(t_list **head);
int		ft_strcmp(char	*s1, char	*s2);
int		get_big(t_list **head);
int		get_pos(t_list **a, int num);
int		ft_isdigit(char c);
int		*list_to_tab(t_list **a);
void	ft_putstr(char *str);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	**ft_split(char const *s, char c);
char	*ft_strdup(const char *src);
char	*ft_strchr(char *str, int c);
char	*ft_join(char *s1, char *s2);
char	*get_next_line(int fd);

#endif