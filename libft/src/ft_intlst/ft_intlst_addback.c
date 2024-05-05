/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_addback.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:59:10 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/05 14:42:17 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

void	ft_intlst_addback(t_intlst **lst, t_intlst *new)
{
	t_intlst	*tmp;

	if (new && *lst)
	{
		if (*lst == NULL)
			*lst = new;
		else
		{
			tmp = ft_intlst_last(*lst);
			tmp->next = new;
		}
	}
}
