/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:24:39 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:24:39 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The strnstr() function locates the first occurrence of null-terminated string
needle in the null-terminated string haystack, where not more than n characters
are searched.
If needle is an empty string, haystack is returned;
if needle occurs nowhere in haystack, NULL is returned;
otherwise a pointer to the first character of the first occurrence of needle is
returned.
---------------------------------------------------------------------------- */
char	*ft_strnstr(const char *haystack, const char *needle, size_t n)
{
	size_t	i;
	size_t	j;

	if (!(*needle) || haystack == needle)
		return ((char *)haystack);
	i = 0;
	while (*(haystack + i) && (i < n))
	{
		j = 0;
		while (*(haystack + i + j) && *(haystack + i + j) == *(needle + j)
			&& (i + j < n))
			j++;
		if (!(*(needle + j)))
			return ((char *)haystack + i);
		i++;
	}
	return (NULL);
}
