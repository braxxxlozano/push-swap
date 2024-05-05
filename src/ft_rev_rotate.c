/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_rotate.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:30:06 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 15:30:24 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_intlst_reverse_rotate(t_intlst **lst)
{
	t_intlst	*first;
	t_intlst	*last;
	t_intlst	*before_last;

	if (*lst && (*lst)->next)
	{
		first = *lst;
		last = ft_intlst_last(*lst);
		before_last = ft_intlst_before_last(*lst);
		*lst = last;
		(*lst)->next = first;
		before_last->next = NULL;
	}
}

/*	rra (reverse rotate a): Shift down all elements of stack a by 1.
	The last element becomes the first one. */
void	ft_rra(t_intlst **a)
{
	if (*a)
	{
		ft_intlst_reverse_rotate(a);
		ft_putstr_fd("rra\n", 1);
	}
}

/*	rrb (reverse rotate b): Shift down all elements of stack b by 1.
	The last element becomes the first one. */
void	ft_rrb(t_intlst **b)
{
	if (*b)
	{
		ft_intlst_reverse_rotate(b);
		ft_putstr_fd("rrb\n", 1);
	}
}

/*	rrr : rra and rrb at the same time. */
void	ft_rrr(t_intlst **a, t_intlst **b)
{
	ft_intlst_reverse_rotate(a);
	ft_intlst_reverse_rotate(b);
	ft_putstr_fd("rrr\n", 1);
}
