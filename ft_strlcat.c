/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlcat.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/26 07:11:22 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:02 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Appends as much of src as fits inside dstsize, preserves space for '\0',
//  and returns the total length it attempted to create.
#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	destlen;
	size_t	srclen;
	size_t	i;

	srclen = ft_strlen(src);
	destlen = 0;
	i = 0;
	while (destlen < dstsize && dst[destlen] != '\0')
		destlen++;
	if (destlen == dstsize)
		return (dstsize + srclen);
	while (src[i] != '\0' && destlen + i + 1 < dstsize)
	{
		dst[destlen + i] = src[i];
		i++;
	}
	dst[destlen + i] = '\0';
	return (destlen + srclen);
}
