/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_new.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:49:13 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:49:16 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Allocates (with malloc(3)) and returns a new element of integer list.
The value is initialized with the value of the parameter.
The variable next is initialized to NULL.
If the allocation fails, the function returns NULL.
---------------------------------------------------------------------------- */
t_intlst	*ft_intlst_new(int value)
{
	t_intlst	*new;

	new = (t_intlst *)malloc(sizeof(t_intlst));
	if (new == NULL)
		return (NULL);
	new->value = value;
	new->next = NULL;
	return (new);
}
