/* ************************************************************************** */
/*                                                                            */
/*                                                       :::      ::::::::    */
/*   ft_putchar_fd.c                                   :+:      :+:    :+:    */
/*                                                   +:+ +:+         +:+      */
/*   By: aal-shat <aal-shat@student.42nice.fr>     #+#  +:+       +#+         */
/*                                               +#+#+#+#+#+   +#+            */
/*   Created: 2026/10/20 09:11:54 by aal-shat         #+#    #+#              */
/*   Updated: 2026/11/04 08:36:56 by aal-shat        ###   ########.fr        */
/*                                                                            */
/* ************************************************************************** */

//Writes one character to the provided file descriptor using write.

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}
