/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_itoa.c                                         :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/11/01 20:10:24 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:37:16 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

/*
Counts the required characters, allocates the string, handles the sign and zero,
then extracts digits with % 10 and fills the string backward.
*/
#include "libft.h"

static int	calculate_len(long long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = -n;
		len++;
	}
	while (n > 9)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}

static char	*memory_management(int len)
{
	char	*temp;

	temp = malloc(sizeof(char) * (len + 1));
	if (!temp)
		return (NULL);
	temp[len] = '\0';
	return (temp);
}

char	*ft_itoa(int n)
{
	char		*new;
	int			len;
	long long	number;

	number = n;
	len = calculate_len(number);
	new = memory_management(len);
	if (!new)
		return (NULL);
	if (number < 0)
	{
		number = -number;
		new[0] = '-';
	}
	if (number == 0)
		new[0] = '0';
	while (number > 0)
	{
		new[len - 1] = number % 10 + '0';
		number = number / 10;
		len--;
	}
	return (new);
}
