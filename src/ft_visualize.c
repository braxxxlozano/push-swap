/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_visualize.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:32:25 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 15:32:29 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

void	ft_visualize_stacks(t_intlst **a, t_intlst **b)
{
	ft_putstr_fd("\n############################################\n", 1);
	ft_putstr_fd("a:\n-------\n", 1);
	ft_intlst_print(*a);
	ft_putstr_fd("-------\n\n", 1);
	ft_putstr_fd("b:\n-------\n", 1);
	ft_intlst_print(*b);
	ft_putstr_fd("-------\n", 1);
	ft_putstr_fd("##########################################\n\n", 1);
}
