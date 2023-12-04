/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   calc_ba.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: oseivane <oseivane@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 13:31:58 by oseivane          #+#    #+#             */
/*   Updated: 2023/12/04 13:08:15 by oseivane         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	ft_case_rarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = ft_find_place_a(a, c);
	if (i < ft_find_index(b, c))
		i = ft_find_index(b, c);
	return (i);
}

int	ft_case_rrarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_a(a, c))
		i = ft_stack_l(a) - ft_find_place_a(a, c);
	if ((i < ft_stack_l(b) - ft_find_index(b, c)) && ft_find_index(b, c))
		i = ft_stack_l(b) - ft_find_index(b, c);
	return (i);
}

int	ft_case_rarrb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_index(b, c))
		i = ft_stack_l(b) - ft_find_index(b, c);
	i = ft_find_place_a(a, c) + i;
	return (i);
}

int	ft_case_rrarb_a(t_stack *a, t_stack *b, int c)
{
	int	i;

	i = 0;
	if (ft_find_place_b(a, c))
		i = ft_stack_l(a) - ft_find_place_b(a, c);
	i = ft_find_index(b, c) + i;
	return (i);
}
