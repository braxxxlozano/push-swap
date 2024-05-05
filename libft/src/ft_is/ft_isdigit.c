/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:51:11 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:51:11 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The isdigit() function tests for a decimal digit character. Regardless of
locale, this includes the following characters only: '0' through'9'. The
function returns zero if the character tests false and returns non-zero if the
character tests true.
The value of the argument must be representable as an unsigned char or the
value of EOF.
The isnumber() function behaves similarly to isdigit(), but may recognize
additional characters, depending on the current locale setting.
---------------------------------------------------------------------------- */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}
