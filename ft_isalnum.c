/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_isalnum.c                                      :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 08:15:19 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:12 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Returns true when c is either alphabetic or numeric by combining ft_isalpha
and ft_isdigit.
*/
#include "libft.h"

int	ft_isalnum(int c)

{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
