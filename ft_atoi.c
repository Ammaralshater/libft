/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_atoi.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 09:04:30 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:19 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Skips whitespace, reads one optional sign, then converts consecutive
//digits into an integer. Conversion stops at the first non-digit.
#include "libft.h"

int	ft_atoi(const char *s)
{
	int		i;
	int		sign;
	long	number;

	i = 0;
	number = 0;
	sign = 1;
	while ((s[i] >= 9 && s[i] <= 13) || s[i] == 32)
		i++;
	if (s[i] == '-' || s[i] == '+')
	{
		if (s[i] == '-')
			sign = -1;
		i++;
	}
	while (s[i] >= '0' && s[i] <= '9')
	{
		number = number * 10 + (s[i] - '0');
		i++;
	}
	return (number * sign);
}
