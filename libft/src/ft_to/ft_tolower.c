/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:03 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:27:03 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
The tolower() function converts an upper-case letter to thecorresponding lower-
case letter.  The argument must be representable as an unsigned char or the
value of EOF.
If the argument is an upper-case letter, the tolower() function returns the
corresponding lower-case letter if there is one; otherwise, the argument is
returned unchanged.
---------------------------------------------------------------------------- */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c + 32);
	return (c);
}
