/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:23:48 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:23:48 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The strlcpy() function copies the src string to the dest string and then adds
a terminating null byte.
Unlike strncpy (), it takes the full size of the buffer (not just the length)
and guarantee to NUL-terminate the result (as long as there is at least one
byte free in dest).
Note that a byte for the NULL should be included in size.
---------------------------------------------------------------------------- */
size_t	ft_strlcpy(char *dest, const char *src, size_t n)
{
	size_t	i;
	size_t	res;

	res = ft_strlen(src);
	if (n == 0)
		return (res);
	i = 0;
	while (*src && (i < (n - 1)))
		*(dest + i++) = *src++;
	*(dest + i) = '\0';
	return (res);
}
