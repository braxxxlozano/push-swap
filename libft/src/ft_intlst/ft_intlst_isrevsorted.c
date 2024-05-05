/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_isrevsorted.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 18:02:16 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/05 14:39:43 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

int	ft_intlst_isrevsorted(t_intlst *lst)
{
	while (lst->next)
	{
		if (lst->value < lst->next->value)
			return (0);
		lst = lst->next;
	}
	return (1);
}
