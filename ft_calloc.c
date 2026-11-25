/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_calloc.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/01 19:05:32 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:07 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Checks for multiplication overflow, allocates count *
size bytes, then initializes all allocated bytes to zero.
*/
#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t	total;
	void	*memory;

	if (size != 0 && count > SIZE_MAX / size)
		return (NULL);
	total = size * count;
	memory = malloc(total);
	if (!memory)
		return (NULL);
	ft_bzero(memory, total);
	return (memory);
}
