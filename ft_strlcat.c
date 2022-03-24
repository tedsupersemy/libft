#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = ft_strlen(dst);
	if (dstsize <= j)
		return (dstsize + ft_strlen(src));
	while (src[i] != '\0' && j < (dstsize - 1))
		dst[j++] = src[i++];
	dst[j] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[i]));
}
