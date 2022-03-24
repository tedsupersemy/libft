#include "libft.h"

static int	ft_numlen(int n)
{
	int	numlen;

	numlen = 0;
	if (n < 0)
		numlen += 1;
	while (n)
	{
		n /= 10;
		numlen++;
	}
	return (numlen);
}

char	*ft_itoa(int n)
{
	int		numlen;
	char	*ptr;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	numlen = ft_numlen(n);
	ptr = (char *)malloc(numlen + 1);
	if (!ptr)
		return (NULL);
	ptr[numlen] = '\0';
	if (n < 0)
	{
		ptr[0] = '-';
		n = -n;
	}
	while (n > 0 && numlen--)
	{
		ptr[numlen] = '0' + (n % 10);
		n /= 10;
	}
	return (ptr);
}
