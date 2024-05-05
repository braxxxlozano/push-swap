/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:50:15 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:50:15 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isascii() function tests for an ASCII character, which is any character
between 0 and octal 0177 inclusive.The function returns zero if the character
tests false and returns non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
