#include "push_swap.h"

int	ft_atoi(const char	*str)
{
	int	i;
	int	n;
	int	rst;

	i = 0;
	rst = 0;
	n = 1;
	while (str[i] == ' ' || str[i] == '\t' || str[i] == '\f'
		|| str[i] == '\v' || str[i] == '\r' || str[i] == '\n')
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			n = -1;
		i++;
	}
	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		rst = rst  * 10 + (str[i] - 48);
		i++;
	}
	return (rst * n);
}
