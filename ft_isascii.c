/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isascii.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:19:08 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:10 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Checks whether the value belongs to the ASCII range: 0 through 127.
*/
#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
