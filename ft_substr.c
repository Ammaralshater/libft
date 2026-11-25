/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_substr.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 15:06:56 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:20 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Allocates and returns part of a string starting at start with a
//maximum length of len. If start is outside the string, it returns an allocated
// empty string.

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	size;
	char	*result;

	size = ft_strlen(s);
	i = 0;
	if (start >= size)
		return (ft_strdup(""));
	if (len > size - start)
		len = size - start;
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	while (i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}
