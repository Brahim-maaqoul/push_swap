#include "push_swap.h"

void	free_list(t_list **stack)
{
	while (*stack)
	{
		free(*stack);
		*stack = (*stack)->next;
	}
	free(stack);
} 
