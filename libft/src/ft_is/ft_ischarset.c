/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ischarset.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:50:35 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:51:01 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* DESCRIPTION:
The function tests if the character c is contained within the character that
are contained in the string set.
The function returns zero if the character tests false and returns non-zero if
the character tests true.
---------------------------------------------------------------------------- */
int	ft_ischarset(char c, const char *set)
{
	int	i;

	i = 0;
	while (*(set + i))
	{
		if (*(set + i) == c)
			return (1);
		i++;
	}
	return (0);
}
