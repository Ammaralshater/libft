/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memchr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 13:35:23 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:07 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Searches the first n bytes for a byte matching c.
It returns a pointer to the first match or NULL.
*/

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t				i;
	const unsigned char	*so;

	so = s;
	i = 0;
	while (i < n)
	{
		if (so[i] == (unsigned char) c)
			return ((void *) & so[i]);
		i++;
	}
	return (NULL);
}
