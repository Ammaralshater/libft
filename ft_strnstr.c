/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strnstr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/27 10:02:48 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:01 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Searches for the first complete occurrence of little inside big, without
// examining more than len characters. An empty little returns big.
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (little[0] == '\0')
		return ((char *) big);
	while (i < len && big[i] != '\0')
	{
		j = 0;
		while (i + j < len && little[j] != '\0' && big[i + j] != '\0'
			&& little[j] == big[i + j])
		{
			j++;
		}
		if (little[j] == '\0')
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}
