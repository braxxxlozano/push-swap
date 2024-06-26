/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isint.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:51:21 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:51:26 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

static void	init_params(unsigned int *n, int *sign, unsigned int *digits)
{
	*n = 0;
	*sign = 1;
	*digits = 0;
}

/* DESCRIPTION:
The function tests for a valid integer in a full null terminated string.
Returns zero if the character tests false and returns non-zero if tests true.
---------------------------------------------------------------------------- */
int	ft_isint(char *s)
{
	unsigned int	n;
	int				sign;
	unsigned int	digits;

	init_params(&n, &sign, &digits);
	if (*s == '+' || *s == '-')
	{
		if (*s++ == '-')
			sign = -1;
	}
	while (*s)
	{
		if (ft_isdigit(*s) && digits < 11 && n <= 214748364)
		{
			if (n == 214748364 && (*s == '9' || (*s == '8' && sign == 1)))
				return (0);
			n = n * 10 + (*s++ - '0');
			digits++;
		}
		else
			return (0);
	}
	if (digits == 0)
		return (0);
	return (1);
}
