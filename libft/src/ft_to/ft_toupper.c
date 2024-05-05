/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:15 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:27:15 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The toupper() function converts a lower-case letter to the corresponding upper-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is a lower-case letter, the toupper() function returns the
corresponding upper-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */
int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}
