/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdain <tdain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 21:15:00 by tdain             #+#    #+#             */
/*   Updated: 2021/11/09 21:20:12 by tdain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*ptr;
	char	sym;

	ptr = (char *)s + ft_strlen(s);
	sym = (char)c;
	while (ptr >= s)
	{
		if (*ptr == sym)
			return (ptr);
		ptr--;
	}
	return (NULL);
}