/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdain <tdain@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/09 19:48:13 by tdain             #+#    #+#             */
/*   Updated: 2021/11/09 20:08:51 by tdain            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isascii(int  c)
{
    return(c >= 0 && c <= 127);
}
