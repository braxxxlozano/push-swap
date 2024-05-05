/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_args_to_intlst.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/04 17:56:42 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/04 17:58:11 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/libft.h"

t_intlst	*ft_args_to_intlst(int argc, char **argv)
{
	int			i;
	t_intlst	*a;
	t_intlst	*tmp;

	i = 1;
	while (i < argc)
	{
		if (i == 1)
			a = ft_intlst_new(ft_atoi((*(argv + i))));
		else
		{
			tmp = ft_intlst_new(ft_atoi((*(argv + i))));
			ft_intlst_addback(&a, tmp);
		}
		i++;
	}
	return (a);
}
