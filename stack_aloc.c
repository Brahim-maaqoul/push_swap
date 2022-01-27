#include "push_swap.h"

t_list	**stack_aloc(t_list **a)
{
  a = (t_list **)malloc(sizeof(t_list *));
  if (!a)
    return (NULL);
  *a = NULL; 
}
