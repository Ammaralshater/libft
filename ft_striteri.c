/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_striteri.c                                     :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/31 18:07:25 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:36:59 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Applies function f directly to every character of the original string.
//It passes the character’s address, allowing f to modify it.
#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}
