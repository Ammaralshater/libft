/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_memset.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:26:24 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:09 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Writes the same byte value into the first n bytes of a memory area.
// It uses unsigned char because memory is manipulated byte by byte.
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;

	p = s;
	i = 0;
	while (i < n)
	{
		p[i] = (unsigned char) c;
		i++;
	}
	return (s);
}
