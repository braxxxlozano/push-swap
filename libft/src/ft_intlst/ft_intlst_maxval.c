/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_maxval.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:48:46 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:48:51 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Takes as a parameter the adress of the first element of a list of integers and
returns the maximum value in the list.
---------------------------------------------------------------------------- */
int	ft_intlst_maxval(t_intlst *lst)
{
	int	max;

	if (lst)
	{
		max = -2147483648;
		while (lst)
		{
			if (lst->value > max)
				max = lst->value;
			lst = lst->next;
		}
		return (max);
	}
	return (0);
}
