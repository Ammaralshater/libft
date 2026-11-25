/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memmove.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/01 19:25:30 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:08 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Copies n bytes while safely handling overlap. It copies forward when the
//destnation is before the source and backward when the destination overlaps
// from the right.

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = dest;
	s = src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		ft_memcpy(d, s, n);
	else
	{
		while (n--)
			d[n] = s[n];
	}
	return (d);
}
