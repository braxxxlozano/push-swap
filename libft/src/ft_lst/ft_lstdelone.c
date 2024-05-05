/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:05:05 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 14:05:05 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Takes as a parameter a pointer to an element and frees the memory of the
element’s content using the function del given as a parameter, then frees the
memory using free(3). The memory of next must not be freed.
---------------------------------------------------------------------------- */
void	ft_lstdelone(t_list *lst, void (*del)(void *))
{
	if (lst && *del)
	{
		del(lst->content);
		free(lst);
	}
}
