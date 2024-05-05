/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:07:07 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:07:07 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The calloc() function contiguously allocates enough space for "count" objects
that are "size" bytes of memory each and returns a pointer to the allocated
memory. The allocated memory is filled with bytes of value zero.
If there is an error, they return a NULL  pointer.
---------------------------------------------------------------------------- */
void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}
