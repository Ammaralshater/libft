/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalpha.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:01:27 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:13 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

// Checks whether c is an uppercase or lowercase English letter. Returns 1 if it
//is alphabetic, otherwise 0.
#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
