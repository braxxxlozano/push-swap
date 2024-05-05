/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:49:55 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:49:55 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isalnum() function tests for any character for which isalpha or isdigit is
true. The value of the argument must be representable as an unsigned char or
the value of EOF.
The isalnum() function returns zero if the character tests false and returns
non-zero if the character tests true.
---------------------------------------------------------------------------- */
int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
