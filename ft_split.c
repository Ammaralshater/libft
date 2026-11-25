/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_split.c                                        :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/22 20:57:27 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:22 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Counts words separated by c, allocates a null-terminated array
//of pointers,
// then creates every word using ft_substr. If allocation fails, 
//it frees everything
//already allocated.
#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	size_t	i;
	size_t	count;

	count = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		if (s[i] != '\0')
			count++;
		while (s[i] != '\0' && s[i] != c)
			i++;
	}
	return (count);
}

static int	cleanup(char **token_v, size_t k)
{
	while (k > 0)
	{
		k--;
		free(token_v[k]);
	}
	free(token_v);
	return (1);
}

static int	filler(char **token_v, char const *s, char c)
{
	size_t	i;
	size_t	k;
	size_t	start;

	k = 0;
	i = 0;
	while (s[i] != '\0')
	{
		while (s[i] != '\0' && s[i] == c)
			i++;
		start = i;
		while (s[i] != '\0' && s[i] != c)
			i++;
		if (i > start)
		{
			token_v[k] = ft_substr(s, start, i - start);
			if (token_v[k] == NULL)
				return (cleanup(token_v, k));
			k++;
		}
	}
	token_v[k] = NULL;
	return (0);
}

char	**ft_split(char const *s, char c)
{
	char	**token_v;
	size_t	words;

	if (s == NULL)
		return (NULL);
	words = count_words(s, c);
	token_v = malloc(sizeof(char *) * (words + 1));
	if (token_v == NULL)
		return (NULL);
	if (filler(token_v, s, c) == 1)
		return (NULL);
	return (token_v);
}
