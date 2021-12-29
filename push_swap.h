/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bmaaqoul <bmaaqoul@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/28 23:38:15 by bmaaqoul          #+#    #+#             */
/*   Updated: 2021/12/29 00:34:21 by bmaaqoul         ###   ########.fr       */
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
	struct s_stack	*prev;
}				t_list;

t_list	*swap_a(t_list **head);

#endif