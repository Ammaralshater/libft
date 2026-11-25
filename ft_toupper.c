/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_toupper.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:29:11 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:24:50 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Converts a lowercase letter to uppercase using the ASCII difference.
// Other characters are returned unchanged.
#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = c - ('a' - 'A');
		return (c);
	}
	return (c);
}
