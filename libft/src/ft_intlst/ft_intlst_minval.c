/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_minval.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:49:01 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:49:05 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Takes as a parameter the adress of the first element of a list of integers and
returns the minimum value in the list.
---------------------------------------------------------------------------- */
int	ft_intlst_minval(t_intlst *lst)
{
	int	min;

	if (lst)
	{
		min = 2147483647;
		while (lst)
		{
			if (lst->value < min)
				min = lst->value;
			lst = lst->next;
		}
		return (min);
	}
	return (0);
}
