/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putuhexnbr_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:12:42 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:12:46 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Outputs the unisgned integer n to the file descriptor fd in hexadecimal.
The function returns the number of characters printed.
---------------------------------------------------------------------------- */
int	ft_putuhexnbr_fd(size_t n, int fd, char cs)
{
	int	count;

	count = 0;
	if (n >= 16)
		count += ft_putuhexnbr_fd(n / 16, fd, cs);
	if ((cs == 'x') || (cs == 'p'))
		count += ft_putchar_fd("0123456789abcdef"[n % 16], fd);
	if (cs == 'X')
		count += ft_putchar_fd("0123456789ABCDEF"[n % 16], fd);
	return (count);
}
