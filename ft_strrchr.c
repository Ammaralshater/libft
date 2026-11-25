/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strrchr.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 08:07:34 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:05 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Searches the entire string and returns the last occurrence of c.

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	int		found;
	size_t	last;

	i = 0;
	found = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (char) c)
		{
			found = 1;
			last = i;
		}
		i++;
	}
	if (s[i] == (char) c)
		return ((char *) & s[i]);
	if (found == 0)
		return (NULL);
	return ((char *) & s[last]);
}
