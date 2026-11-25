/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strtrim.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/21 18:43:18 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:22 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Finds the first and last characters not contained in set,
//then returns that section using ft_substr.

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	char	*result;

	start = 0;
	end = ft_strlen(s1);
	while (start < end && ft_strchr(set, s1[start]) != NULL)
		start++;
	while (end > start && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	result = ft_substr(s1, start, (end - start));
	return (result);
}
