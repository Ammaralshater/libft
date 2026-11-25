/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isdigit.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:11:59 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:12 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Checks whether c is between '0' and '9', including both boundaries.
*/
#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
