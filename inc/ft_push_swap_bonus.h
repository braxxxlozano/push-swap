/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_push_swap_bonus.h                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blozano- <blozano-@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/31 13:46:45 by blozano-          #+#    #+#             */
/*   Updated: 2024/03/31 13:46:50 by blozano-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PUSH_SWAP_BONUS_H
# define FT_PUSH_SWAP_BONUS_H

# include "../libft/inc/libft.h"

void			ft_pa(t_intlst **a, t_intlst **b);
void			ft_pb(t_intlst **a, t_intlst **b);
void			ft_sa(t_intlst **a);
void			ft_sb(t_intlst **b);
void			ft_ss(t_intlst **a, t_intlst **b);
void			ft_ra(t_intlst **a);
void			ft_rb(t_intlst **b);
void			ft_rr(t_intlst **a, t_intlst **b);
void			ft_rra(t_intlst **a);
void			ft_rrb(t_intlst **b);
void			ft_rrr(t_intlst **a, t_intlst **b);
void			ft_smart_rotate_a(t_intlst **a, int cost);
void			ft_smart_rotate_b(t_intlst **b, int cost);
void			ft_smart_rotate(t_intlst **a, t_intlst **b, int c_a, int c_b);
void			ft_sort(t_intlst **a, t_intlst **b, int n);
void			ft_sort_2(t_intlst **lst);
void			ft_sort_3(t_intlst **lst);
void			ft_sort_5(t_intlst **a, t_intlst **b, int n);
void			ft_sort_big(t_intlst **a, t_intlst **b, int n);
void			ft_revsort_2(t_intlst **lst);
void			ft_revsort_3(t_intlst **lst);
void			ft_visualize_stacks(t_intlst **a, t_intlst **b);
int				ft_input_to_args(int argc, char ***argv);
unsigned int	ft_derive_cost(t_intlst **src, t_intlst **dst);
int				ft_get_dstcost_max_first(t_intlst *lst);
void			ft_check(t_intlst **a, t_intlst **b);

#endif