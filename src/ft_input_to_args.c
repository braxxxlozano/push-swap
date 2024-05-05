/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_input_to_args.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 15:29:45 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 15:29:48 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../inc/ft_push_swap.h"

static int	ft_input_length(int argc, char ***argv)
{
	int	length;
	int	i;

	i = 0;
	length = 0;
	while (i < argc)
		length += ft_strlen(*(*(argv) + i++)) + 1;
	return (length);
}

static int	ft_argcount(char **tab)
{
	int	i;

	i = 0;
	while (*(tab + i))
		i++;
	return (i);
}

int	ft_input_to_args(int argc, char ***argv)
{
	char	*str;
	char	**arg_list;
	int		i;
	int		flag;

	str = (char *)malloc(sizeof(char) * (ft_input_length(argc, argv) + 1));
	if (!str)
		return (0);
	i = 0;
	flag = 1;
	while (i < argc)
	{
		if (flag == 0)
		{
			str = ft_strcat(str, " ");
			flag = 1;
			continue ;
		}
		str = ft_strcat(str, *(*(argv) + i++));
		flag = 0;
	}
	arg_list = ft_split(str, ' ');
	free (str);
	*argv = arg_list;
	return (ft_argcount(arg_list));
}
