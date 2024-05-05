/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isspace.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:52:54 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:52:58 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isspace() function tests for the white-space characters. For any locale,
this includes the following standard characters:

``\t''``\n''``\v''``\f''``\r''`` ''

The value of the argument must be representable as an unsigned char or the
value of EOF.
The isspace() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isspace(int c)
{
	if ((c >= 9 && c <= 13) || c == 32)
		return (1);
	return (0);
}
