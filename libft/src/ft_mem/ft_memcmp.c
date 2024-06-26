/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:09:17 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:09:17 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The memcmp() function compares the first n bytes (each interpreted as unsigned
char) of the memory areas s1 and s2.
The function returns an integer less than, equal to, or greater than zero if
the first n bytes of s1 is found, respectively, to be less than, to match, or
be greater than the first n bytes of s2.
For a nonzero return, the sign is determined by the sign of the difference
between the first pair of bytes (interpreted as unsigned char) that differ in
s1 and s2. If n is zero, the return value is zero.
---------------------------------------------------------------------------- */
int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*b1;
	unsigned char	*b2;
	size_t			i;

	if (n == 0)
		return (0);
	b1 = (unsigned char *)s1;
	b2 = (unsigned char *)s2;
	i = 0;
	while ((i < n - 1) && (*(b1 + i) == *(b2 + i)))
		i++;
	return (*(b1 + i) - *(b2 + i));
}
