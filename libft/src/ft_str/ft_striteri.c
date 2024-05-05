/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:23:00 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:23:04 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Applies the function f to each character of the string passed as argument, and
passing its index as first argument. Each character is passed by address to f
to be modified if necessary.
---------------------------------------------------------------------------- */
void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	if (f != NULL)
	{
		i = 0;
		while (*(s + i))
		{
			f(i, s + i);
			i++;
		}
	}
}
