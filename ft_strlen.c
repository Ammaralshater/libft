/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_strlen.c                                       :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 07:59:32 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:06 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Counts characters until the null terminator and returns the string length
// 	without counting '\0'.

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
