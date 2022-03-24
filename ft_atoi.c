
#include "libft.h"

int	ft_atoi(const char *str)
{
	int		sign;
	long	num;

	sign = 1;
	num = 0;
	while (*str == ' ' || *str == '\t' ||
			*str == '\n' || *str == '\v' ||
			*str == '\f' || *str == '\r')
		str++;
	if ((*str == '+' || *str == '-'))
	{
		if (*str == '-')
			sign = -1;
		str++;
	}
	while (ft_isnum(*str))
	{
		num = (num * 10) + (*(str++) - '0');
		if (num > 2147483647 && sign == 1)
			return (-1);
		if (num > 2147483648 && sign == -1)
			return (0);
	}
	return (num * sign);
}
