/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_tolower.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:32:58 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:36:52 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Converts an uppercase letter to lowercase. Other characters remain unchanged.

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = c + ('a' - 'A');
		return (c);
	}
	return (c);
}
