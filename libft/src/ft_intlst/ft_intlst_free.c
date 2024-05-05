/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_free.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:00:11 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/04 18:00:19 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"
#include <stdio.h>

/* DESCRIPTION:
Takes as a parameter the adress of a pointer to the first element of a list of
integers and frees all elements of the list.
---------------------------------------------------------------------------- */
void	ft_intlst_free(t_intlst **lst)
{
	t_intlst	*tmp;

	while (*lst)
	{
		tmp = *lst;
		*lst = (*lst)->next;
		free(tmp);
	}
}
