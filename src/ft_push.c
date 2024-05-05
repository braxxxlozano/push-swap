/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:29:56 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/05 14:43:41 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_intlst_push(t_intlst **src, t_intlst **dst)
{
	t_intlst	*temp;

	if (*src)
	{
		temp = (*src)->next;
		(*src)->next = *dst;
		*dst = *src;
		*src = temp;
	}
}

/*	pa (push a): Take first element at the top of b and put it at the top of a.
	Do nothing if b is empty. */
void	ft_pa(t_intlst **a, t_intlst **b)
{
	if (*b)
	{
		ft_intlst_push(b, a);
		ft_putstr_fd("pa\n", 1);
	}
}

/*	pb (push b): Take first element at the top of a and put it at the top of b.
	Do nothing if a is empty. */
void	ft_pb(t_intlst **a, t_intlst **b)
{
	if (*a)
	{
		ft_intlst_push(a, b);
		ft_putstr_fd("pb\n", 1);
	}
}
