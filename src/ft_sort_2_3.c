/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_2_3.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:30:48 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 15:30:52 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_sort_2(t_intlst **lst)
{
	if ((*lst)->value > (*lst)->next->value)
		ft_sa(lst);
}

void	ft_sort_3(t_intlst **lst)
{
	int	a;
	int	b;
	int	c;

	while (!ft_intlst_issorted(*lst))
	{
		a = (*lst)->value;
		b = (*lst)->next->value;
		c = (*lst)->next->next->value;
		if (a < c)
			ft_sa(lst);
		else
		{
			if (b > a)
				ft_rra(lst);
			else
				ft_ra(lst);
		}
	}
}

void	ft_revsort_2(t_intlst **lst)
{
	if ((*lst)->value < (*lst)->next->value)
		ft_sa(lst);
}

void	ft_revsort_3(t_intlst **lst)
{
	int	a;
	int	b;
	int	c;

	while (!ft_intlst_isrevsorted(*lst))
	{
		a = (*lst)->value;
		b = (*lst)->next->value;
		c = (*lst)->next->next->value;
		if (a > c)
			ft_sb(lst);
		else
		{
			if (b < a)
				ft_rrb(lst);
			else
				ft_rb(lst);
		}
	}
}
