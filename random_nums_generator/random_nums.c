/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   random_nums.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 14:27:55 by blozano-          #+#    #+#             */
/*   Updated: 2024/05/05 14:42:57 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft/inc/libft.h"
#include <time.h>

int	ft_is_in_tab(int *tab, int num, unsigned int size)
{
	unsigned int	i;

	if (size == 0)
		return (0);
	i = 0;
	while (i < size)
	{
		if (num == *(tab + i))
			return (1);
		i++;
	}
	return (0);
}

void	ft_print_toconsole(int *tab, unsigned int size)
{
	unsigned int	i;

	ft_putchar_fd('\n', 1);
	i = 0;
	while (i < size)
	{
		ft_putnbr_fd(*(tab + i), 1);
		if (i != size - 1)
			ft_putchar_fd(' ', 1);
		i++;
	}
	ft_putchar_fd('\n', 1);
	ft_putchar_fd('\n', 1);
}

int	main(int argc, char **argv)
{
	unsigned int	size;
	unsigned int	i;
	int				num;
	int				*tab;

	if (argc == 2)
	{
		size = ft_atoi(*(argv + 1));
		tab = (int *)malloc(sizeof(int) * size);
		i = 0;
		srand(time(NULL));
		while (i < size)
		{
			num = (rand() - rand()) % 10000;
			while (ft_is_in_tab(tab, num, i))
				num = (rand() - rand()) % 10000;
			*(tab + i) = num;
			i++;
		}
		ft_print_toconsole(tab, size);
		free (tab);
	}
	return (0);
}
