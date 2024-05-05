/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:06:53 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:06:53 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The bzero() function writes n zeroed bytes to the string s. Effectively erases
all data by writing zeros (bytes containing '\0').
If n is zero, bzero() does nothing.
---------------------------------------------------------------------------- */
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
