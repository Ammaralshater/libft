/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isprint.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:22:38 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:10 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Checks whether c is a printable ASCII character, from space (32) through ~ (126).
*/
#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
