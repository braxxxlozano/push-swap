/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rotate.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:30:16 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 15:30:20 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_intlst_rotate(t_intlst **lst)
{
	t_intlst	*first;
	t_intlst	*last;

	if (*lst && (*lst)->next)
	{
		first = *lst;
		last = ft_intlst_last(*lst);
		*lst = (*lst)->next;
		first->next = NULL;
		last->next = first;
	}
}

/*	ra (rotate a): Shift up all elements of stack a by 1.
	The first element becomes the last one. */
void	ft_ra(t_intlst **a)
{
	if (*a)
	{
		ft_intlst_rotate(a);
		ft_putstr_fd("ra\n", 1);
	}
}

/*	rb (rotate b): Shift up all elements of stack b by 1.
	The first element becomes the last one. */
void	ft_rb(t_intlst **b)
{
	if (*b)
	{
		ft_intlst_rotate(b);
		ft_putstr_fd("rb\n", 1);
	}
}

/*	rr : ra and rb at the same time. */
void	ft_rr(t_intlst **a, t_intlst **b)
{
	ft_intlst_rotate(a);
	ft_intlst_rotate(b);
	ft_putstr_fd("rr\n", 1);
}
