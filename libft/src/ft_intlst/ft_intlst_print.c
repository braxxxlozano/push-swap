/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intlst_print.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:49:24 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:49:27 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

/* DESCRIPTION:
Takes as a parameter the adress of a pointer to the first element of a list of
integers and prints all elements of the list.
---------------------------------------------------------------------------- */
void	ft_intlst_print(t_intlst *lst)
{
	t_intlst	*next_item;

	while (lst)
	{
		next_item = lst->next;
		ft_putnbr_fd((lst->value), 1);
		ft_putchar_fd('\n', 1);
		lst = next_item;
	}
}
