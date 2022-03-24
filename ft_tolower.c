/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdain <tdain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 20:10:01 by tdain             #+#    #+#             */
/*   Updated: 2021/11/09 20:31:29 by tdain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int	c)
{
	if (c >= 'A' && c <= 'Z')
		return ((c - 'A' + 'a'));
	else
		return (c);
}