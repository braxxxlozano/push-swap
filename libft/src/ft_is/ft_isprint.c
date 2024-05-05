/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:52:41 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:52:41 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isprint() function tests for any printing character, including space (‘ ’).
The value of the argument must be representable as an unsigned char or the
value of EOF.
Function returns zero if the character tests false and returns non-zero if
tests true.
---------------------------------------------------------------------------- */
int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
